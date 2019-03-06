#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int in;

int arr[501][501] = {0};
int dp[501][501] = {0};
int out = 0;

int main(void){

  cin >> in;

  for(int i = 1; i <= in; i++){
    for(int j = 1; j <= i; j++){
      cin >> arr[i][j];
      }
    }

  for(int i = 1; i <= in; i++){
    for(int j = 1; j <= i; j++){
      if(j == 1){
        dp[i][j] = dp[i - 1][j] + arr[i][j];
      }else if(i == j){
        dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
      }else{
        dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + arr[i][j];
    }
  }
}


int max = 0;
  for(int i = 1 ; i <= in ; i++){
  		if(dp[in][i] > max)
  			max = dp[in][i] ;
  	}
  	printf("%d\n",max);


  //   out_arr[i] = arr[in][i];
  // sort(out_arr, out_arr + in);


  return 0;
}
