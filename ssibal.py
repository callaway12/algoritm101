class node:
    def __init__(self, value = None):
        self.value = value
        self.left = None
        self.right = None
    
class bst:
    def __init__(self):
        self.root = None
    
    def insert(self, value):
        if self.root == None:
            self.root = node(value)
        else:
            self._insert(value, self.root)
    def _insert(self, value, cur_node):
        if value<cur_node.value:
            if cur_node.left == None:
                cur_node.left = node(value)
            else:
                self._insert(value, cur_node.left)
        elif value>=cur_node.value:
            if cur_node.right == None:
                cur_node.right = node(value)
            else:
                self._insert(value, cur_node.right)

    def print_tree(self):
        if self.root is not None:
            self._print_tree(self.root)
    
    def _print_tree(self, cur_node):
        if cur_node is not None:
            self._print_tree(cur_node.left)
            print("")
            self._print_tree(cur_node.left)

arr = [1, 11, 15, 19, 37, 48, 59, 61]

tree = bst()

for j in arr:
    tree.insert(j)


tree.print_tree()