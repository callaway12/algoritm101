#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <ctime>
#include <vector>

using namespace std;

// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int tmp;
    int index[7] = {0};
    int result = 0;
    for(int i = 0; i < A.size(); i++){
      if(A[i] == 1) index[1]++;
      if(A[i] == 2) index[2]++;
      if(A[i] == 3) index[3]++;
      if(A[i] == 4) index[4]++;
      if(A[i] == 5) index[5]++;
      if(A[i] == 6) index[6]++;
    }

    result = index[2] + index[3] + index[4] + index[5] + index[6]*2;

    tmp = index[1] + index[3] + index[4] + index[5]*2 + index[6];
    if(tmp < result)result = tmp;

    tmp = index[1] + index[2] + index[4]*2 + index[5] + index[6];
    if(tmp < result)result = tmp;

    tmp = index[1] + index[2] + index[3]*2 + index[5] + index[6];
    if(tmp < result)result = tmp;

    tmp = index[1] + index[2]*2 + index[3] + index[4] + index[6];
    if(tmp < result)result = tmp;

    tmp = index[1]*2 + index[2] + index[4] + index[5] + index[3];
    if(tmp < result)result = tmp;

    return result;







}
