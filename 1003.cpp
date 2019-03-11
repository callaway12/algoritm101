#include <stdio.h>
#include <iostream>
using namespace std;
int dp[41][2] = {0};
int T = 0;
int n[40];

int main(void){
dp[0][0] = 1;
dp[0][1] = 0;
dp[1][0] = 0;
dp[1][1] = 1;
  cin >> T;
  for(int i = 0; i < T; i++){
  cin >> n[i];
}
  for(int i = 0; i < T; i++){

    if(n[i]==0){
      printf("%d %d \n", dp[0][0], dp[0][1]);
    } else if(n[i]==1){
      printf("%d %d \n", dp[1][0], dp[1][1]);
    }else{
      for(int k = 2; k < n[i] + 1; k++){
        dp[k][0] = dp[k-1][0] + dp[k-2][0];
        dp[k][1] = dp[k-1][1] + dp[k-2][1];
      }
      int a = n[i];
      printf("%d %d \n", dp[a][0],dp[a][1]);


    }
  }




  return 0;
}
