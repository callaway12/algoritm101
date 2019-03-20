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
// int get_leaf(int pos) {
//   if (tree[pos].left == -1 && tree[pos].right == -1){
//     return 1;
//   }
//   else if(tree[pos].left == -1 && tree[pos].right != -1){
//     int t_right = tree[pos].right;
//     return get_leaf(t_right);
//   }else if(tree[pos].right == -1 && tree[pos].left != -1) {
//     int t_left = tree[pos].left;
//     return get_leaf(t_left);
//   }else if(tree[pos].left != -1 && tree[pos].right != -1){
//     int t_left = tree[pos].left;
//     int t_right = tree[pos].right;
//     return get_leaf(t_left) + get_leaf(t_right);
//   }
// }
// int plus(int pos){
//   if(tree[pos].left != -1 && tree[pos].right != -1){
//     int t_l = tree[pos].left;
//     int t_r = tree[pos].right;
//     tree[pos].cnt = plus(t_l) + plus(t_r) + tree[pos].cnt;
//   }else if(tree[pos].left != -1){
//     int t_l = tree[pos].left;
//     tree[pos].cnt += plus(t_l);
//   }else if(tree[pos].right != -1){
//       int t_r = tree[pos].right;
//       tree[pos].cnt += plus(t_r);
//       return
//   }else{
//     return 1;
//   }
// }
int asdf(int pos){
  if(tree[pos].left != -1 && tree[pos].right != -1){
    int t_l = tree[pos].left;
    int t_r = tree[pos].right;
    tree[pos].cnt = asdf(t_l) + asdf(t_r) + tree[pos].cnt;
   return tree[pos].cnt;
  }else if(tree[pos].left != -1){
    int t_l = tree[pos].left;
    tree[pos].cnt += asdf(t_l);
   return tree[pos].cnt;
  }else if(tree[pos].right != -1){
      int t_r = tree[pos].right;
      tree[pos].cnt += asdf(t_r);
     return tree[pos].cnt;
  }else return 1;
}

int main(void){
  int count[100]= {0};

  for (int i = 0; i < nodeNum-1; i++)
    {
        tree[i].parent = -1;
        tree[i].right = -1;
        tree[i].left = -1;
        tree[i].data = -1;
        tree[i].cnt = 0;
    }

    int n, t, data, child, left, right;
    cin >> t;

    for(int i = 0; i < t; i++){
      cin >> n;
      for(int k = 0; k < n; k++){
        scanf("%d %d %d", &data, &left, &right);
        tree[left].parent = data;
        tree[right].parent = data;

        tree[k].left = left;
        tree[k].right = right;
        tree[k].data = data;

      }//다 잡아넣음.

      for(int y = n; y > 0; y--){

        if(tree[y].left && tree[y].right){
          int t_l = tree[y].left;
          int t_r = tree[y].right;
          if(asdf(t_l) && asdf(t_r)){
            if(asdf(t_l) < asdf(t_r))
              count[i]++;
          }
        }else if(tree[y].right){
          count[i]++;
        }
      }
    }

    for(int i = 0; i < t; i++){

      cout << count[i] << endl;


    }


    return 0;

}
