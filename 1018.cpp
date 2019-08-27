#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int in_arr[51][51] = {0};
int ch_arr[51][51] = {0};

int a, b;

int case1_arr[8][8] = {
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1}
};

int case2_arr[8][8] = {
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0},
  {0,1,0,1,0,1,0,1},
  {1,0,1,0,1,0,1,0}
};

int main (void){
  int count1 = 0;
  int count2 = 0;
  int min = 50;
  cin >> a >> b;

  for(int i = 0; i< a; i++){
    for(int j = 0; j < b; j++){
      char tmp;
      cin >> tmp;
      if(tmp == 'W'){
        in_arr[i][j] = 1;
      }else if(tmp == 'B'){
        in_arr[i][j] = 0;
      }
    }
  }
int tmp_12 = 0;
  for(int i = 0; i <= a-8; i++){
    for(int j = 0; j <= b-8; j++){

      for(int k = 0; k < 8; k++){
        for(int p = 0; p < 8; p++){

          if(in_arr[i][j] == 1){
            if(in_arr[k+i][p+j] != case1_arr[k][p]){
              count1++;
            }else{
              count2++;
            }
          }else if(in_arr[i][j] == 0){
            if(in_arr[k+i][p+j] != case2_arr[k][p]){
              count2++;
            }else{
              count1++;
            }
          }


          if(count1 > count2){
            tmp_12 = count2;
          }else{
            tmp_12 = count1;
          }

        }
      }
      count1 = 0;
      count2 = 0;

        if(tmp_12 < min){
          min = tmp_12;
        }




    }
  }


cout<<min;
  return 0;
}
