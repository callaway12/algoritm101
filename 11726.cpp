#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int dp[1001] ={0};

int main(void){

  int n;
  cin >> n;
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;

  for(int i = 2; i <= n; i++){
    dp[i] = (dp[i-1] + dp[i-2])%10007;
  }

  cout << dp[n];



  return 0;
}
