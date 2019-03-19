#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define nodeNum 1002

typedef struct _tree {
    int left;
    int right;
    int parent;
    int data;
    int cnt;
    int visit;
}Tree;

Tree tree[nodeNum];


// int plus(int pos)
// {
//     if (tree[pos].left != -1 ){
//       //왼쪽 자식이 있으면?
//       int t_left = tree[pos].left;
//       if(tree[t_left].visit == -1){
//         tree[pos].leftcnt++;
//         tree[pos].leftcnt += tree[t_left].leftcnt;
//         tree[pos].rightcnt += tree[t_right].rightcnt;
//         pos = tree[t_left].left;
//         tree[pos].visit = 1;
//
//         return plus(pos);
//       }
//
//
//     }else if(tree[pos].right != -1){
//       int t_right = tree[pos].right;
//       if(tree[t_right].visit == -1){
//         tree[pos].rightcnt++;
//         tree[pos].rightcnt += tree[t_right].rightcnt;
//         tree[pos].leftcnt += tree[t_left].leftcnt;
//         pos = tree[t_right].right;
//         tree[pos].visit = 1;
//         return plus(pos);
//       }
//     }
//
//
//
//
// }
int get_leaf(int pos) {
  if (tree[pos].left == -1 && tree[pos].right == -1){
    tree[pos].cnt++;
    return 1;

  }
  else{
    int t_left = tree[pos].left;
    int t_right = tree[pos].right;
    return get_leaf(t_left) + get_leaf(t_right);
  }
}



int main(void){
  for (int i = 0; i < nodeNum-1; i++)
    {
        tree[i].parent = -1;
        tree[i].right = -1;
        tree[i].left = -1;
        tree[i].data = -1;
        tree[i].cnt = 0;
        tree[i].visit = 0;
    }

    int n, t, data, child, left, right;
    cin >> t;
    for(int i = 0; i < t; i++){
      cin >> n;
      for(int k = 0; k < n; k++){
        scanf("%d %d %d", &data, &left, &right);
        tree[k].left = left;
        tree[k].right = right;
        tree[k].data = data;
        tree[left].parent = data;
        tree[right].parent = data;

      }
    } //다 잡아넣음.

    for(int i = 0; i < t; i++){




    }




}
