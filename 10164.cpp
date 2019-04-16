#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

std::vector<int> v;


int dp[16][16]= {1};
int n, m, k;




int main(void){

  cin >> n >> m >> k;
  for(int d = 0; d < n; d++){
    dp[d][0] = 1;
  }
  for(int r = 0; r < m; r++){
    dp[0][r] = 1;
  }

  int a, b, cnt = 0;
  if (k == 0) {
          a = 1;
          b = 1;
      }
      else {
          for (int i = 1; i <= n; i++) {
              for (int j = 1; j <= m; j++) {
                  cnt++;
                  if (cnt == k) {
                      a = i;
                      b = j;
                      break;
                  }
              }
          }
      }
// cout << a << b << endl;

if(k != 0 && n!=1 && m!=1){
  for(int d = 1; d < a; d++){
    for(int r = 1; r < b; r++){
      dp[d][r] = dp[d][r-1] + dp[d-1][r];
    }
  }
  int tmp_dp = dp[a-1][b-1];

  // for(int d = a-1; d < n; d++){
  //   dp[d][b-1] = dp[a-1][b-1];
  // }
  // for(int r = b-1; r < m; r++){
  //   dp[a-1][r] = dp[a-1][b-1];
  // }
  // cout << dp[a - 1][b - 1] << endl;

  for(int d = a-1; d < n; d++){
    for(int r = b-1; r < m; r++){
      if(d == a-1){
        dp[d][r] = 1;
      }else if(r == b-1){
        dp[d][r] = 1;
      }else{
        dp[d][r] = dp[d][r-1] + dp[d-1][r];
      }
    }
  }

  // cout << dp[1][3] << endl;
  // for(int i = 0; i < n; i ++){
  //   for(int j = 0; j < m; j++){
  //     printf("%d ", dp[i][j]);
  //   }
  //   printf("\n");
  //}
  // cout << dp[n-1][m-1] << tmp_dp;

  cout << dp[n-1][m-1] * tmp_dp;




}else if(k == 0){
  for(int d = 1; d < n; d++){
    for(int r = 1; r < m; r++){
      dp[d][r] = dp[d][r-1] + dp[d-1][r];
    }
  }
  // for(int i = 0; i < n; i ++){
  //   for(int j = 0; j < m; j++){
  //     printf("%d ", dp[i][j]);
  //   }
  //   printf("\n");
  // }
  cout << dp[n-1][m-1];


}else if(n==1 && m==1 && k==1){
  cout << 1;
}else if(a == 0 || b==0){
  for(int d = 1; d < n; d++){
    for(int r = 1; r < m; r++){
      dp[d][r] = dp[d][r-1] + dp[d-1][r];
    }
  }
  // for(int i = 0; i < n; i ++){
  //   for(int j = 0; j < m; j++){
  //     printf("%d ", dp[i][j]);
  //   }
  //   printf("\n");
  // }
  cout << dp[n-1][m-1];
}else if(n ==1 || m ==1){
  if(n == 1 && m != 1){
    cout << 1;
  }else if(n != 1 && m == 1){
    cout << 1;
  }

}



  return 0;
}
