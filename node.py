class Node:
    def __init__(self, data=None, left=None, right=None, depth=None):
        self.data = data
        self.left = left
        self.right = right
        self.depth = depth
    def isLeaf(self):
        return not self.left and not self.right
    def hasLeft(self):
        return not(self.left is None)
    def hasRight(self):
        return not(self.right is None)

class Bst:
    def __init__(self, root=None):
        self.root = root
        self.size = 0
        if root:
            self.size =1
    
    def search(self, key):
        tmp = self.root
        while tmp:
            if tmp.key == key:
                return self.root
            if tmp.key > key:
                tmp = tmp.left
            else:
                tmp = tmp.right
        return None

    def insert(self, key, data):
        if not self.search(key):
            tmp = self.root

            while tmp:
                if tmp.key > key:
                    if not tmp.hasLeft():
                        tmp.left = Node(key, data)
                        self.size += 1
                        break
                    else:
                        tmp = tmp.left

                else:
                    if not tmp.hasRight():
                        tmp.right = Node(key, data)
                        self.size += 1
                        break
                    
                    else:
                        tmp = tmp.right


                    
arr = [1, 11, 15, 19, 37, 48, 59, 61]
print('heelo')
a = int(input('plz : '))
bst = Bst()

for x in arr:
    bst.insert(x)

print(bst.search(a))   




