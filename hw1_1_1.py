class TreeNode:
    def __init__(self, key, val):
        self.key = key
        self.value = val
        self._leftChild = None
        self._rightChild = None
        self.parent = None

    @property
    def leftChild(self):
        return self._leftChild
    @leftChild.setter
    def leftChild(self, value):
        if self._leftChild:
            self._leftChild.parent = None
        if value:
            value.parent = self
        self._leftChild = value
    @property
    def righChild(self):
        return self._rightChild
    @righChild.setter
    def righChild(self, value):
        if self._rightChild:
            self._rightChild.parent = None
        if value:
            value.parent = self
        self._rightChild = value

    def isRoot(self):
        return parent is None

    def isLeaf(self):
        return self._leftChild is None and self._rightChild is None

    def isLeftChild(self):
        return self.parent and self.parent.leftChild is self

    def isRightChild(self):
        return self.parent and self.parent.rightChild is self

    def hasLeftChild(self):
        return self._leftChild is not None

    def hasRightChild(self):
        return self._rightChild is not None

    def hasBothChild(self):
        return self._rightChild is not None and self._leftChild is not None

    def hasAnyChild(self):
        return not self.isLeaf()



    class BST:
        def __init__(self):
            self.root = None
            self.length = 0;
        def put(self, key, val):
            if self.root:
                self.__put(key, val, self.root)
            else:
                self.root = TreeNode(key, val)

        def __put(self, key, val, currentNode):
            targetNode = currentNode
            while True:
                if key > targetNode.key:
                    if not targetNode.hasLeftChild():
                        targetNode.leftChild = TreeNode(key, value)
                        break
                    else:
                        targetNode = targetNode.leftChild
                else:
                    if not targetNode.hasRightChild():
                        targetNode.righChild = TreeNode(key, value)
                        break
                    else:
                        targetNode = targetNode.rightChild
            self.length += 1
