#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int dp[1001][3] = {0};
int cost[1001][3] = {0};


int main (void){

  int in;
  cin >> in;

  for(int i = 1; i <= in; i++){
      scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
  }
  dp[1][0] = cost[1][0];
  dp[1][1] = cost[1][1];
  dp[1][2] = cost[1][2];


  for(int i = 2; i <= in; i++){
    dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + cost[i][0];
    dp[i][1] = min(dp[i-1][2], dp[i-1][0]) + cost[i][1];
    dp[i][2] = min(dp[i-1][1], dp[i-1][0]) + cost[i][2];
  }

  int check[3];
  check[0] = dp[in][0];
  check[1] = dp[in][1];
  check[2] = dp[in][2];

  sort(check, check+3);
  printf("%d \n", check[0]);

  return 0;
}
