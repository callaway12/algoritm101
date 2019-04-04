class Node:
    def __init__(self, data):
        self.data = data
        self.cnt = None
        self.left = None
        self.right = None


class Bst:
    def __init__(self):
        self.root = None

    def setRoot(self, data):
        self.root = Node(data)

    def insert(self, data):
        if (self.root is None):
            self.setRoot(data)
        else:
            self.insertNode(self.root, data)

    def insertNode(self, pos, data):
        if (data <= pos.data):
            if (pos.left):
                self.insertNode(pos.left, data)
            else:
                pos.left = Node(data)
        elif (data > pos.data):
            if (pos.right):
                self.insertNode(pos.right, data)
            else:
                pos.right = Node(data)

    def find(self, data):
        return self.findNode(self.root, data)

    def findNode(self, pos, data):
        if (pos is None):
            print("None")
            return False
        elif (data == pos.data):
            return True
        elif (data < pos.data):
            return self.findNode(pos.left, data)
        else:
            return self.findNode(pos.right, data)

bst = Bst()

arr = [1, 11, 15, 19, 37, 48, 59, 61]

for x in arr:
    bst.insert(x)

n = len(arr)

count_tmp = 1
input_tmp = 0

input_tmp = int(input("Input Number : "))

for i in arr:
    if i == input_tmp:
        print ("Order :" + str(count_tmp))


    else:
        count_tmp += 1





bst.find(input_tmp)

