
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define nodeNum 1002
int qwer[100] = {0};
typedef struct _tree {
   int left;
   int right;
   int data;
   int cnt;
}Tree;

Tree tree[nodeNum];

int asdf(int pos) {

   if (tree[pos].left == -1 && tree[pos].right == -1) {
      tree[pos].cnt = 1;
      return 1;//leaf node인 경우 cnt=1, 1을 return;
   }

   if (tree[pos].left != -1 && tree[pos].right != -1) {
      //tree의 실제 index는 1부터 시작하지만 tree array는 0부터 시작하므로 index -1해야함;
      int t_l = tree[pos].left -1;
      int t_r = tree[pos].right -1;
      tree[pos].cnt = asdf(t_l) + asdf(t_r) +1;
      //왼쪽 오른쪽 다 존재하면 양쪽의 cnt + 1;
      return tree[pos].cnt;
   }
   else if (tree[pos].left != -1) {
      int t_l = tree[pos].left -1;
      tree[pos].cnt = asdf(t_l) + 1;
      return tree[pos].cnt;
   }
   else if (tree[pos].right != -1) {
      int t_r = tree[pos].right - 1;
      tree[pos].cnt += asdf(t_r) + 1;
      return tree[pos].cnt;
   }
}

int main(void) {
   int count[100] = {0};

   for (int i = 0; i < nodeNum - 1; i++)
   {
      tree[i].right = -1;
      tree[i].left = -1;
      tree[i].data = -1;
      tree[i].cnt = 0;
   }
   //모든 node 초기화

   int n, t, data, child, left, right;
   cin >> t;

   for (int i = 0; i < t; i++) {
      cin >> n;
      for (int k = 0; k < n; k++) {

         scanf("%d %d %d", &data, &left, &right);
         tree[k].left = left;
         tree[k].right = right;
         tree[k].data = data;

      }//다 잡아넣음.


      asdf(0);
      for (int j = 0; j < n; j++) {
         if (tree[tree[j].left-1].cnt < tree[tree[j].right-1].cnt)
            count[i]++;
      }// 모든 노드에서 왼쪽 오른쪽 child의 cnt를 비교, 오른쪽이 더크면 count[i]++
   }

   for (int i = 0; i < t; i++) {
      cout << count[i] << endl;
   }


   return 0;

}
