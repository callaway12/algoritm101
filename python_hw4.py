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


    def inorder(self, pos):
        if (pos is not None):
            if (pos.left):
                self.inorder(pos.left)
            print(str(pos.data))
            if (pos.right):
                self.inorder(pos.right)
    def preorder(self, pos):
        if (pos is not None):
            print(str(pos.data))

            if (pos.left):
                self.preorder(pos.left)
            if (pos.right):
                self.preorder(pos.right)

    def postorder(self, pos):
        if (pos is not None):
            if (pos.left):
                self.postorder(pos.left)
            if (pos.right):
                self.postorder(pos.right)
            print(str(pos.data))

bst = Bst()

n1 = Node(15)
n2 = Node(1)
n3 = Node(37)
n4 = Node(61)
n5 = Node(26)
n6 = Node(59)
n7 = Node(48)

n1.left = n2
n1.right = n3
n2.left = n4
n2.right = n5
n3.left = n6
n3.right = n7

bst.root = n1


print('Preorder Traverse \n')
bst.inorder(bst.root)
print('Inorder Traverse \n')
bst.preorder(bst.root)
print('Postorder Traverse \n')
bst.postorder(bst.root)

