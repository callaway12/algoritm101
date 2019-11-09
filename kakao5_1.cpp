#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

// int main(void) {
// int answer = 0;
// int k;
//   cin >> k;
// vector<int> stones;
//   stones.push_back(2);
//   stones.push_back(4);
//   stones.push_back(5);
//   stones.push_back(3);
//   stones.push_back(2);
//   stones.push_back(1);
//   stones.push_back(4);
//   stones.push_back(2);
//   stones.push_back(5);
//   stones.push_back(1);
int solution(vector<int> stones, int k){
  vector<int> tmp_sum;
  int tmp_i;

  cout << "stone size : " << stones.size() << endl;
  for(int i = 0; i <= stones.size()-k; i++){
    int sum = 0;
    for(int j = 0; j < k; j++){
      sum += stones[j+i];
    }
    cout << "sum : " <<  sum << endl;
    tmp_sum.push_back(sum);
  }
  int tmp_min = 9999999;
  for(int i = 0; i < tmp_sum.size(); i++){
    printf("%d \n", tmp_sum[i]);
    if(tmp_min > tmp_sum[i] && tmp_i <= i){
      tmp_min = tmp_sum[i];
      tmp_i = i;
    }
  }


  cout << "i : " << tmp_i << endl;
  answer = stones[tmp_i];
    cout << answer;
    return 0;
}
