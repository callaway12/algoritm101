#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main(void){
  int t;
  cin >> t;
  for(int i = 0; i < t; i++){
    int n, k, w, arr[1001], pre[1001] = {0};
    vector <int> suc;
    scanf("%d %d", &n, &k);
    for(int j = 1; j <= n; j++)
      scanf("%d", & arr[i]);
    for(int j = 1; j <= k; j++){
      int x, y;
      scanf("%d %d", &x, &y);
      suc[x] = y;
      pre[y]++;
    }
    cin >> w;



  int dp[1001] = {0};
  queue< int > q;
  for(int j = 1; j <= n; j++){
    if(!pre[j])
      q.push(i);
  }
  while(pre[w] > 0){
    int u = q.front();
    q.pop();
    for(int next = 1; next <= arr[u]; next++
    ){
      dp[next] = max(dp[next], dp[u] + arr[u]);
      if(--pre[next] == 0)
        q.push(next);
    }
  }
  int out = dp[w] + arr[w];
  cout << out << endl;
  }
  return 0;
}
