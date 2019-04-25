import numpy as np
import tensorflow as tf
class TextCNNRNN(object):
   def __init__(self, embedding_mat, non_static, hidden_unit, sequence_length, max_pool_size,
      num_classes, embedding_size, filter_sizes, num_filters, l2_reg_lambda=0.0):
      self.input_x = tf.placeholder(tf.int32, [None, sequence_length], name='input_x')
      self.input_y = tf.placeholder(tf.float32, [None, num_classes], name='input_y')
      self.dropout_keep_prob = tf.placeholder(tf.float32, name='dropout_keep_prob')
      self.batch_size = tf.placeholder(tf.int32, [])
      self.pad = tf.placeholder(tf.float32, [None, 1, embedding_size, 1], name='pad')
      self.real_len = tf.placeholder(tf.int32, [None], name='real_len')
l2_loss = tf.constant(0.0)
with tf.device('/cpu:0'), tf.name_scope('embedding'):
         if not non_static:
            W = tf.constant(embedding_mat, name='W')
         else:
            W = tf.Variable(embedding_mat, name='W')
         self.embedded_chars = tf.nn.embedding_lookup(W, self.input_x)
         emb = tf.expand_dims(self.embedded_chars, -1)
         pooled_concat = []
         reduced = np.int32(np.ceil((sequence_length) * 1.0 / max_pool_size))
      
         for i, filter_size in enumerate(filter_sizes):
            with tf.name_scope('conv-maxpool-%s' % filter_size):
# Zero paddings so that the convolution output have dimension batch x sequence_length x emb_size x channel
            num_prio = (filter_size-1) // 2
            num_post = (filter_size-1) - num_prio
            pad_prio = tf.concat([self.pad] * num_prio,1)
            pad_post = tf.concat([self.pad] * num_post,1)
            emb_pad = tf.concat([pad_prio, emb, pad_post],1)
            filter_shape = [filter_size, embedding_size, 1, num_filters]
            W = tf.Variable(tf.truncated_normal(filter_shape, stddev=0.1), name='W')
            b = tf.Variable(tf.constant(0.1, shape=[num_filters]), name='b')
            conv = tf.nn.conv2d(emb_pad, W, strides=[1, 1, 1, 1], padding='VALID', name='conv')
h = tf.nn.relu(tf.nn.bias_add(conv, b), name='relu')
# Maxpooling over the outputs
            pooled = tf.nn.max_pool(h, ksize=[1, max_pool_size, 1, 1], strides=[1, max_pool_size, 1, 1], padding='SAME', name='pool')
            pooled = tf.reshape(pooled, [-1, reduced, num_filters])
            pooled_concat.append(pooled)
            pooled_concat = tf.concat(pooled_concat,2)
            pooled_concat = tf.nn.dropout(pooled_concat, self.dropout_keep_prob)
# lstm_cell = tf.nn.rnn_cell.LSTMCell(num_units=hidden_unit)
#lstm_cell = tf.nn.rnn_cell.GRUCell(num_units=hidden_unit)
      lstm_cell = tf.contrib.rnn.GRUCell(num_units=hidden_unit)
#lstm_cell = tf.nn.rnn_cell.DropoutWrapper(lstm_cell, output_keep_prob=self.dropout_keep_prob)
      lstm_cell = tf.contrib.rnn.DropoutWrapper(lstm_cell, output_keep_prob=self.dropout_keep_prob)
self._initial_state = lstm_cell.zero_state(self.batch_size, tf.float32)
      #inputs = [tf.squeeze(input_, [1]) for input_ in tf.split(1, reduced, pooled_concat)]
      inputs = [tf.squeeze(input_, [1]) for input_ in tf.split(pooled_concat,num_or_size_splits=int(reduced),axis=1)]
      #outputs, state = tf.nn.rnn(lstm_cell, inputs, initial_state=self._initial_state, sequence_length=self.real_len)
      outputs, state = tf.contrib.rnn.static_rnn(lstm_cell, inputs, initial_state=self._initial_state, sequence_length=self.real_len)
# Collect the appropriate last words into variable output (dimension = batch x embedding_size)
      output = outputs[0]
      with tf.variable_scope('Output'):
         tf.get_variable_scope().reuse_variables()
         one = tf.ones([1, hidden_unit], tf.float32)
         for i in range(1,len(outputs)):
            ind = self.real_len < (i+1)
            ind = tf.to_float(ind)
            ind = tf.expand_dims(ind, -1)
            mat = tf.matmul(ind, one)
            output = tf.add(tf.multiply(output, mat),tf.multiply(outputs[i], 1.0 - mat))
with tf.name_scope('output'):
         self.W = tf.Variable(tf.truncated_normal([hidden_unit, num_classes], stddev=0.1), name='W')
         b = tf.Variable(tf.constant(0.1, shape=[num_classes]), name='b')
         l2_loss += tf.nn.l2_loss(W)
         l2_loss += tf.nn.l2_loss(b)
         self.scores = tf.nn.xw_plus_b(output, self.W, b, name='scores')
         self.predictions = tf.argmax(self.scores, 1, name='predictions')
with tf.name_scope('loss'):
         losses = tf.nn.softmax_cross_entropy_with_logits(labels = self.input_y, logits = self.scores) # only named arguments accepted 
         self.loss = tf.reduce_mean(losses) + l2_reg_lambda * l2_loss
with tf.name_scope('accuracy'):
         correct_predictions = tf.equal(self.predictions, tf.argmax(self.input_y, 1))
         self.accuracy = tf.reduce_mean(tf.cast(correct_predictions, "float"), name='accuracy')
with tf.name_scope('num_correct'):
         correct = tf.equal(self.predictions, tf.argmax(self.input_y, 1))
         self.num_correct = tf.reduce_sum(tf.cast(correct, 'float'))
2. Sentiment analysis

import requests
import random
import nltk
from nltk.corpus import stopwords,wordnet
import re
english_stops = set(stopwords.words('english'))
english_stops.add('.')
english_stops.add('also') 
english_stops.add('get')
def feature_extractor(document):
 features = {}
 ls =[]
 for document_words in document:
 for i,word in enumerate(document_words):
 if ((word.lower() not in english_stops
 and word.isalpha())
 or word.lower() =='not'):
 syn= wordnet.synsets(word.lower())
 v='no'
 n='no'
 r='no'
 a='no'
 identity='unknown'
 if len(syn) is 0:
 identity='unknown'
 continue
 else:
 identity='known'
 word = word.lower()
 features['contains(%s) with identity %s'% (word.lower(),identity)] = True
 return features
def pre_train_processor(sent):
 rd=re.sub(r'(^@| @)[^ ]+',r"",sent)
 rd=re.sub(r'(^http| http)[^ ]+',r"",rd)
 rd=re.sub(r'(\.)*\1',r".",rd)
 rep=re.findall(r'(\w).*\1.*\1', rd) 
 
 for ch in rep:
 rd=re.sub(r''+ch+ch+ch+r'+',r''+ch+ch,rd)
 sentences = nltk.sent_tokenize(rd)
 sentences = [nltk.word_tokenize(sent) for sent in sentences]
 return sentences
def train_classifier():
 l = ['1006589563512903396', '1008324413029484000', '1040575996755346578', '1045137713186360887', '7022552177697192106','674420826054740334', '698451933787252187','414302334487557591','8944057146243258823','6946341970593481260','1431312376514000040','7864797704321962005','7070434591968454556']
 app_id = '8bf9db83'
 app_key = '428d906f5a33883c5066ddcfb5704f39'
 final_resp = []
 featuresets = []
 url ="http://developer.goibibo.com/api/voyager/get_hotels_by_cityid/?app_id=8bf9db83&app_key=428d906f5a33883c5066ddcfb5704f39&city_id=6771549831164675055"
 res = requests.get(url)
 result = res.json()
print len(result['data'].keys())
 count = 0
 for key in result['data'].keys():
 count +=1
 print count
 vid = result['data'][key]['hotel_geo_node']['_id']
 #vid = data.get('vid','7022552177697192106')
limit = "50"
 url = "http://ugc.goibibo.com/api/HotelReviews/forWeb?app_id=" + app_id + "&app_key=" + app_key + "&vid=" + vid+"&limit=" + limit + "&offset=0"
 res = requests.get(url)
 reslt = res.json()
 try:
 for review in reslt:
 if review.get('reviewContent') and len(review['reviewContent'].strip()) > 10:
 final_resp.append({'rating': review['totalRating'], 'text': review['reviewContent']})
 except Exception,e:
 print str(e)
for x in final_resp:
 data = feature_extractor(pre_train_processor(x['text']))
 if x['rating'] > 3:
 tag = 'good'
 elif x['rating'] == 3:
 tag = 'moderate'
 else:
 tag = 'bad'
 featuresets.append((data, tag))
 print "lenght of data set: " + str(len(featuresets))
 feat_len = int(0.8*len(featuresets))
 train_set, test_set = featuresets[:feat_len], featuresets[feat_len:]
 classifier = nltk.NaiveBayesClassifier.train(train_set)
 print nltk.classify.accuracy(classifier, test_set)
 return classifier
def check_pos_hotels(classifier, data):
sentences = pre_train_processor(data)
 
 feat = feature_extractor(sentences)
 
 res={}
 res['features']=feat
 res['tag']=classifier.classify(feat)
 return res