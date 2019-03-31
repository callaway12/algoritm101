class Node:
    def __init__(self, val):
        self.value = val
        self.left = None
        self.right = None
    
    def insert(self, data):
        if self.value == data:
            return False
        elif self.value > data:
            if self.left:
                return self.left.insert(data)
            else:
                self.left = Node(data)
                return True

    def find(self, data):
        if self.value == data:
            return True
        elif self.value > data:
            if self.left:
                return self.left.find(data)
            else:
                return False
        else:
            if self.right:
                return self.right.find(data)
            else:
                return False

    def preorder(self):
        if self:
            print (str(self.value))
            if self.left:
                self.left.preorder()
            if self.right:
                self.right.preorder()

    def inorder(self):
        if self:
            if self.left:
                self.left.inorder()
            print (str(self.value))
            if self.right:
                self.right.inorder()
    
    def postorder(self):
        if self:
            if self.left:
                self.left.postorder()
            if self.right:
                self.right.postorder()
            print (str(self.value))
            

class Tree:
    def __init__(self):
        self.root = None
    
    def insert(self, data):
        if self.root:
            return self.root.insert(data)
        else:
            return False
        
    def find(self, data):
        if self.root:
            return self.root.find(data)
    
    def preorder (self):
        if self.root is None:
            return
        print("preorder")
        self.root.preorder()

    def postorder (self):
        print("postorder")
        self.root.postorder()

    def inorder (self):
        print("inorder")
        self.root.inorder()
    

bst = Tree()

bst.insert(10)
bst.insert(30)
bst.insert(20)
bst.insert(60)
bst.insert(70)

print(bst.insert(15))
bst.preorder()
bst.inorder()
