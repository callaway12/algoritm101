#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
int dp[1001] = {0};

int t, n, k, w;
int weight[1001] = {0};
int test[1001] = {0};
int main(void){

  cin >> t;
  for(int ttt = 0; ttt < t; ttt ++){
    queue< pair <int, int> > q;
    vector< pair<int, int> > v;


  cin >> n >> k;

  for(int i = 1; i <= n; i++){
    cin >> weight[i];
  }

  for(int i = 1; i <= k; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    v.push_back( pair < int , int >( a, b) );
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < k; i ++){
    int c = v[i].first;
    int d = v[i].second;
    q.push( make_pair(c,d));
  }

  cin >> w;

  while(!q.empty()){
    int a = q.front().first;
    int b = q.front().second;

    if(a == 1){
      dp[b] = weight[a] + weight[b];
      q.pop();
    }else if(dp[w] != 0){

    }
    else{
      int temp = dp[a] + weight[b];
      if(dp[b] < temp){
        dp[b] = temp;
      }
      q.pop();
    }
  }




  test[ttt] = dp[w];
  }

  for(int i = 0; i < t; i++){
    cout << test[i] << endl;
  }
  return 0;
}
