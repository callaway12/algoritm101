#include <stdio.h>
#include <iostream>
using namespace std;

int dp[10001] = {0};
int inarr[10001] = {0};
int in = 0;

int main(void){

  cin >> in;
  for(int i = 1; i <= in; i++){
    cin >> inarr[i];
  }

    dp[1] = inarr[1];
    dp[2] = inarr[1] + inarr[2];
  for(int i = 3; i <= in; i++){
    dp[i] = max((dp[i-2] + inarr[i]), (dp[i - 3] + inarr[i-1] + inarr[i]));
    dp[i] = max(dp[i - 1], dp[i]);

  }

  cout << dp[in];


  return 0;
}
