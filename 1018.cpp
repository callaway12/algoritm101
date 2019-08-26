#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int in_arr[51][51] = {0};
int ch_arr[51][51] = {0};

int a, b;
int count = 0;

int main (void){

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

  for(int i = 0; i =< a-8; i++){
    for(int j = 0; j =< b-8; j++){
      for(int k = 0; k < a; k++){
        for(int p = 0; p < b; p++){
          if(ch_arr[k][p] == ch_arr[k+1][p]){
            if(ch_arr[k][p] == 1){
              ch_arr[k+1][p] = 0;
              count++;
            }else if(ch_arr[k][p] == 0 ){
              ch_arr[k+1][p] = 1;
              count++;
            }
          }
        }
      }


    }
  }



  return 0;
}
