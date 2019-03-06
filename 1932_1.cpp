#include <iostream>
#include <algorithm>
using namespace std;

int triangle[501][501];
int dp[501][501];
int triSize;
int solve(int i, int j){
  int& ret = dp[i][j];
  if(ret > -1) return ret;
  if(i == triSize -1 && j == triSize - 1) return ret = triangle[i][j];
  return ret = max(solve(i + 1, j), solve(i + 1, j + 1)) + triangle[i][j];
}


int main(){
  cin >> triSize;
  for(int i = 0; i < triSize; i++){
    for(int j = 0; j < triSize; j++){
      dp[i][j] = -1;
    }
  }
  for(int i = 0; i < triSize; i++){
    for(int j = 0; j <= i; j++){
      cin >> triangle[i][j];
    }
  }
  cout << solve(0,0) << endl;

  return 0;
}
