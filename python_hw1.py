class Node:
    def __init__(self, val):
        self.val = val
        self.cnt = None
        self.leftChild = None
        self.rightChild = None


class BST:
    def __init__(self):
        self.root = None

    def setRoot(self, val):
        self.root = Node(val)

    def insert(self, val):
        if (self.root is None):
            self.setRoot(val)
        else:
            self.insertNode(self.root, val)

    def insertNode(self, currentNode, val):
        if (val <= currentNode.val):
            if (currentNode.leftChild):
                self.insertNode(currentNode.leftChild, val)
            else:
                currentNode.leftChild = Node(val)
        elif (val > currentNode.val):
            if (currentNode.rightChild):
                self.insertNode(currentNode.rightChild, val)
            else:
                currentNode.rightChild = Node(val)

    def find(self, val):
        return self.findNode(self.root, val)

    def findNode(self, currentNode, val):
        if (currentNode is None):
            print("None")
            return False
        elif (val == currentNode.val):
            # print("Order :" + str(currentNode.val))
            return True
        elif (val < currentNode.val):
            return self.findNode(currentNode.leftChild, val)
        else:
            return self.findNode(currentNode.rightChild, val)

bst = BST()

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

