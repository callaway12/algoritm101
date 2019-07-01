#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int dp[1001];


int main(void){
  dp[1] = 1;
  dp[2] = 3;

  int n = 0;
  cin >> n;

  for(int i = 3; i <= n; i++){
    dp[i] = (dp[i-1] + dp[i-2]*2)%10007;
  }

  cout << dp[n];



  return 0;
}
