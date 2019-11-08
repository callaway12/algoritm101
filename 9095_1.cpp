#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;



int main(void){
  int t;
  int arr[12] = {0};
  int dp[100000] = {0};
  int out[12] = {0};
  cin >> t;
  for (int i = 1; i <= t; i++){
    cin >> arr[i];
  }
  for(int i = 1; i <= t; i++){
    for(int j = 4; j <= arr[i]; j++){
      dp[1] = 1;
      dp[2] = 2;
      dp[3] = 4;
      dp[j] = dp[j-3] + dp[j-2] + dp[j-1];

    }
    if(arr[i] == 0){
      out[i] = 0;
    }else if(arr[i] == 1){
      out[i] = 1;
    }else if(arr[i] == 2){
      out[i] = 2;
    }else if(arr[i] == 3){
      out[i] = 4;
    }else{
      out[i] = dp[arr[i]];
    }

  }


  for(int i = 1; i <= t; i++){
    cout << out[i] << endl;
  }

  return 0;
}
