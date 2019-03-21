#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;
int dp[101][100001] = {0};
int coin[101] = {0};
int main(void){

  int n, k;
  cin >> n >> k;


  for(int i = 1; i <= n; i++){
    int a;
    cin >> a;
    coin[i] = a;
  }

  // for(int i = 1; i <= n; i++){
  //   cout << coin[i];
  // }
  for (int i = 1; i <= n; i++) {
          dp[i][0] = 1;
      }

  for(int j = 1; j <= n; j++){
    for(int i = 1; i <= k; i++){
      if(i >= coin[j]){
        dp[j][i] = dp[j][i-coin[j]] + dp[j-1][i];
      }
        else{
          dp[j][i] = dp[j-1][i];
        }
        printf("%d \n", dp[j][i]);
    }
    cout << endl;
  }


  cout << dp[n][k];

  return 0;

}
