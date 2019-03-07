#include <stdio.h>
#include <iostream>
using namespace std;
int dp[41][2] = {0}
int T = 0;

int main(void){
dp[0][0] = 1;
dp[0][1] = 0;
dp[1][0] = 0;
dp[1][1] = 1;
  cin >> T;
  for(int i = 0; i < T; i++){
    int n;
    cin >> n;
    if(n==0){
      printf("%d %d \n", dp[0][0], dp[0][1]);
    } else if(n==1){
      printf("%d %d \n", dp[1][0], dp[1][1]);
    }else{
      for(int k = 2; k < n; k++){
        dp[k][0] = dp[k-1][0] + dp[k-2][0];
        dp[k][1] = dp[k-1][1] + dp[k-2][1];

      }
    }
  }

  return 0;
}
