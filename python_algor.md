파이썬 정리

Sort 는 리스트를 새로 반환
Sorted 고대로 그냥 정렬만해서 반환 show의 느낌 option - reverse=True 굳

my_list = ['apple', 'banana', 'grapes']
counter_list = list(enumerate(my_list))
print(counter_list)

# Output: [(0, 'apple'), (1, 'banana'), (2, 'grapes')]

Index 함수

숫자
a = [11,10,12,13,20,31,11,10,10,11]
print(a.index(10,2,9))    # index(value, start, end)
----------------------------------------------------
7

문자
a = '123451'
print(a.index('1',1,6))
------------------------
5

소수 찾기 
-> 에스토리스채 -> set으로 sqrt 2, 2루트 한놈들 중에 

아스키 코드
chr(“z”) 
ord(“97”)


sum(map(int,str(number)))
map(f, iterable)은 각 요소가 함수 f에 의해 수행된 결과를 묶어서 리턴하는 함수, str(number)각 인덱스에 int()함수를 수행해서 변환 후  print(''.join(list(reversed(j)))) 이렇게 했음


Python list
는 그냥 a = [] 이렇게 해놓으면 초기화가 안되어있기에 몇번째 인덱스가 없이 그냥 벡터 선언처럼 되어있어
answer[i] = append(tmp[a - i])
이렇게 하면 index out of range 가 뜸
그래서 이렇게 고쳐야함
answer.append(tmp[a - i])

Answer[-1] 이러면 맨 뒤에서 시작


숫자로 받았을때 반대로 돌려서 출력하는건데
나는 str 으로 변환해서 index로 반대로 돌려서 붙혔는데
Map 똑같이 써서 하는데 중요한건 str에서 reversed 라는게 있고 
Reversed 하면 오브젝트로 나오니깐 이거를 list 로 변환해서 출력

tmp = []
    tmp = list(map(int, str(n)))
    
    # print(tmp)
    a = len(tmp) - 1
    for i in range(len(tmp)):
        # print(a -i)
        answer.append(tmp[a - i])
    
    j = 26264
    print(list(map(int, reversed(str(j)))))


Import math
math.sqrt() -> 2루트
Math.power(a, n) a^n


최대 공약수 최소 공배수
유클리드 호제법
큰놈을 작은놈으로 계속 나눠가면서



갯수 찾기 해시
list((col.Counter(participant) - col.Counter(completion)).keys())[0]
Counter 라는 함수
Col 이라는 함수
https://excelsior-cjh.tistory.com/94

근데 입력 값을 dic 으로 하면
# collections.Counter 예제 (2)
# dictionary를 입력값으로 함

import collections

print(collections.Counter({'가': 3, '나': 2, '다': 4}))

'''
결과
Counter({'다': 4, '가': 3, '나': 2})
'''

이렇게 자동으로 소팅 되는 듯 함

갯수로도 초기화 가능

# collections.Counter 예제 (3)
# '값=개수' 입력값으로 함

import collections

c = collections.Counter(a=2, b=3, c=2)
print(collections.Counter(c))
print(sorted(c.elements()))

'''
결과
Counter({'b': 3, 'c': 2, 'a': 2})
['a', 'a', 'b', 'b', 'b', 'c', 'c']
'''

선언하고 이렇게 할 수 도 있다
Update 로 조지기 가능
거기다가 순서대로 갯수로 정렬해서 key값도 정려해주네

# collections.Counter 예제 (4)
# '문자열'을 입력값으로 함

import collections

container = collections.Counter()
container.update("aabcdeffgg")
print(container)

'''
결과
Counter({'a': 2, 'd': 2, 'f': 2, 'g': 2, 'c': 1, 'e': 1})
'''

for k,v in container.items():
print(k,':',v)

'''
결과
f : 2
e : 1
b : 1
g : 2
c : 1
a : 2
d : 1
'''



ZIP 함수
def solution(participant, completion):
    participant.sort()
    completion.sort()
    for p, c in zip(participant, completion):
        if p != c:
            return p
    return participant[-1]

zip은 복수개의 iterable 객체로부터 같은 idx의 원소들을 비교할 때 쓰는 함수입니다.

사실상 비교가 아니라

# 예제1 - zip()예제
## 1) list 형
x = [1, 2, 3]
y = [4, 5, 6]
 
zipped = zip(x, y)
print(list(zipped))
'''
결과
[(1, 4), (2, 5), (3, 6)]
'''
 
z = [7, 8, 9]
zipped2 = zip(x, y, z)
print(list(zipped2))
'''
결과
[(1, 4, 7), (2, 5, 8), (3, 6, 9)]
'''
 
## 2) str 형
a = 'abc'
b = 'def'
 
zipped3 = zip(a, b)
print(list(zipped3))
'''
결과
[('a', 'd'), ('b', 'e'), ('c', 'f')]
'''

# 예제2 - zip()을 이용한 Dictionary의 value기준으로 
# 최소(min), 최대(max)값 찾기 및 정렬하기
# 1) 최소, 최대값 찾기
 
d = {'banana': 3, 'apple': 4, 'pear': 1, 'orange':2}
 
min_item = min(zip(d.values(), d.keys()))
max_item = max(zip(d.values(), d.keys()))
print(min_item)
print(max_item)
'''
결과
(1, 'pear')
(4, 'apple')
'''
 
# 2) 오름차순으로 정렬하기
d_sorted = sorted(zip(d.values(), d.keys()))
print(d_sorted)
'''
결과: [(1, 'pear'), (2, 'orange'), (3, 'banana'), (4, 'apple')]
'''
d_sorted2 = sorted(d.items(), key= lambda t:t[1])
print(d_sorted2)
'''
결과: [('pear', 1), ('orange', 2), ('banana', 3), ('apple', 4)]
'''


visit = {}
    for (key, val) in enumerate(computers):
        visit[key+1] = val

해시, 딕셔너리

ck = {}
    for name, kind in clothes:
        if kind in ck:
            ck[kind] += 1
        if kind not in ck:
            ck[kind] = 1
    tmp = [num for num in ck.values()]
    print(tmp)


from collections import defaultdict

Ck = defaultdict(int)
for name, kind in clothes:
         ck[kind] += 1

훨씬 간단, 즉, defaultdict 으로 하면 그 키값이 있는지 없는지, 있으면 어떻게 넣을건지 다 지정해줘야함


Import collections

https://dongdongfather.tistory.com/72

******* deque



여기서 중요한게 소팅 key 값으로 lambda g:gen_cnt[g] 일때 보면
print(gen_cnt['classic'])
이거 하면 그 몇번 플레이 값이 나오니깐
그 플레이 횟수로 소팅을 해야하니깐 저 값을 키로 한다 이거임
또는 딕셔너리의 값을 가져오고 싶으면 .get() 하면 된다


# print(gen_cnt['classic'])
    gen_sorted = sorted(gen_cnt, key = lambda g:gen_cnt[g], reverse=True)#lambda x: x[1] ,reverse=True)
    # 정답 gen_cnt.get : operator.itemgetter(1)   //  print(gen_sorted) 
    

요번 문제에서 느낀건

딕셔너리의 value 값으로 어떠한 값이든 들어갈 수 있고
특히 들어가는놈으로 heapq 를 하면 앞에 놈으로 자동으로 정렬 된다.



from collections import defaultdict
import heapq

이건 자주 쓸듯


2차원 리스트 초기화
    dp = [[0 for i in range(m+1)] for j in range(n+1)]


리스트 뒤집을때
[::-1] .reverse()


range(어디부터 , 어디미만까지, 간격)
range(10, -1, -1)
10부터 -1까지 -1의 간격으로
for(int I = -1 ; I <10; I -= 1) 이런느낌



def solution(progresses, speeds):
    answer = []
    day = 0
    n = len(progresses)
    
    while progresses:
        cnt = 0
        tmp = 0
        day += 1
        
        for i in range(len(progresses)):
            progresses[i] += speeds[i]
        
        
        while progresses and progresses[0] >= 100:
            progresses.pop(0)
            speeds.pop(0)
            cnt += 1
        
        if cnt > 0:
            answer.append(cnt)
        
    return answer

****** 맨 앞에 놈만 계속 뽑아내서 확인하고싶을때 ( 물론 pop 이기에 뽑아서 필요없는 놈 자꾸 해줘야함, 물론 방법은 있을듯)
보면 while 안에 while 이 있는데
저 안에 와일이 안에 있는 애들중에 첫번째가 100보다 클때 게속 뽑아주는데 그 안에서 pop(0)을 하니깐 맨 앞에놈만 계속 검사하다가 끝나면 넘어오고 그때 cnt 가 0보다 큰놈이면 그때 프로세스가 끝난 애들이 적어도 한명 있으니깐 그때 answer에다가 append  시켜주는것



List.index(value) 하면 value 에 해당하는 놈의 인덱스를 가져옴 
