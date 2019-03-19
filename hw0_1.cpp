typedef struct TreeNode {
  int data;
  struct TreeNode *left, *right;
} TreeNode;

int get_leaf(TreeNode *root) { // 트리에 존재하는 단말노드의 갯수를 구한다.
  if (!root)
    return 0;
  if (root->left == NULL && root->right == NULL)
    return 1;
  else
    return get_leaf(root->left) + get_leaf(root->right);
}

void main() {
  TreeNode n4 = { 500, NULL, NULL };
  TreeNode n5 = { 200, NULL, NULL };
  TreeNode n3 = { 100, &n4, &n5 };
  TreeNode n2 = { 50, NULL, NULL };
  TreeNode n1 = { 0, &n2, &n3 };

  printf("단말 노드의 갯수 = %d\n", get_leaf(&n1));
}
