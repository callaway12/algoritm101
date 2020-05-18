#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;



int N;
vector<pair <int, int> > v;



int main(void){
  cin >> N;
  // int dp[1000];
  vector<int> dp;
  for(int i = 0; i < N; i++){
      int tmp_in1, tmp_in2;
      cin >> tmp_in1 >> tmp_in2;
      v.push_back(make_pair(tmp_in1, tmp_in2));
      dp.push_back(tmp_in2);
  }

  // for(int i = 0; i < N; i++){
  //     cout << v[i].first << " " << v[i].second;
  //     cout << "\n";
  //
  // }
  for(int i = 1; i < N; i++){
    for(int j = 0; j < i; j++){
      if(i - j >= v[j].first){
        dp[i] = max(v[i].second + dp[j], dp[i]);
      }
    }
  }
  int max = 0;
  for(int i = 0; i < N; i++){
    if(i + v[i].first < N + 1){
      if(max < dp[i]){
        max = dp[i];
      }
    }
  }


  cout << max;
  return 0;
}
