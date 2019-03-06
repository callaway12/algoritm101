#include <stdio.h>
#include <algorithm>

using namespace std;
int dp[] = {0};
int arr[3] = {1, 2, 3};


int main(void){
  int T, n;
  cin >> T;
  for(int i = 0; i < T; i++){
    for(int i = 0; i < ){
      cin >> n;

      dp[0] = arr[0];
      dp[i] = arr[i] + dp[i-1];
    }

  }





  return 0;
}
