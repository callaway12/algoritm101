#include <stdio.h>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

const int max1 = 301;
int arr[max1] = {0};
int dp[max1] = {0};
int in;

int main(void){
  cin >> in;
  for(int i = 1; i <= in; i++){
    scanf("%d", &arr[i]);
  }
  dp[2] = arr[2] + arr[1];
  dp[1] = arr[1];

  for(int n = 3; n <= in; n++){
    dp[n] = max(dp[n-2] + arr[n], dp[n-3] + arr[n-1] + arr[n]);

  }
 cout << dp[in];

  return 0;
}
