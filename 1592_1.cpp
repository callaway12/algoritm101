#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int dp[10001] = {0};

int main(void){
  int n, m, l;
  cin >> n >> m >> l;
  int pos = 1;

  int ball = 0;

  // game start
  dp[1] = 1;
  while(1){
    if(dp[pos] == m){
      break;
    }else{
      if(dp[(pos%n)]%2 == 1){
        pos = (pos + n - l) % n;
        dp[pos]++;
        ball++;
      }else{
        pos = (pos + l) % n;5
        dp[pos]++;
        ball++;
      }
    }
  }


  cout << ball;
  return 0;
}
