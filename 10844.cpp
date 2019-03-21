#include<stdio.h>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define mod 1000000000
long dp[101][11] ={0};

int main(void){
  int N;

  cin >> N;
  for(int i = 0; i < 9; i ++){
    dp[1][i] = 1;
  }

  for(int i = 2; i <= N; i ++) {
        for(int j = 0; j <= 9; j ++) {

            if(j == 0) {
                dp[i][j] = dp[i - 1][1];
            } else if(j == 9) {
                dp[i][j] = dp[i - 1][8];
            } else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
            }

            dp[i][j] %= mod;
        }
    }





  long out = 0;
  for(int i = 0; i < 10; i++){
    out += dp[N][i]%mod;
  }

  cout << out%mod;



  return 0;
}
