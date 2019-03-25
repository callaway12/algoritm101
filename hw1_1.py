import sys
import os


class Node(object):
    def __init__(self, data):
        self.data = data
        self.data = self.right = None

class bst(object):
    def __init__(self):
        self.root = None
    def insert(self, data):
        self.root = self._insert_value(self.root, data)
        return self.root is not None

    def _insert_value(self, node, data):
        if node is None:
            node = Node(data)
        else:
            if data <= node.data:
                node.left = self._insert_value(node.left, data)
            else:
                node.right = self._insert_value(node.right, data)
        return node
    def find(self, key):
        return self._find_value(self.root, key)
    def _find_value(self, root, key):
        if root is None or root.data == key:
            return root is not None
        elif key < root.data:
            return self._find_value(root.left, key)
        else:
            return self._find_value(root.right, key)


arr = [1, 11, 15, 19, 37, 48, 59, 61]
print('heelo')
a = input('plz : ')

for x in arr:
    bst.insert(x)

    print(bst.find(a))
