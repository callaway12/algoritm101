#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int N, M;
int crr_x, crr_y, dir;
int in_arr[51][51] = {0};
int ch_arr[51][51] = {0};

class Robot{
  int pos_x;
  int pos_y;
  int forward[2] = {0};
  int left[2] = {forward[0]+1, forward[1]+1};
  int right[2] = {forward[0]+1, forward[1]-1};
  int backward[2] = {forward[0]+2, forward[1]};

};



int main(void){

  int chk = 0;

  cin >> N >> M;

  cin >> crr_x >> crr_y >> dir;

  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> in_arr[i][j];
      ch_arr[i][j] = in_arr[i][j];
    }
  }

  Robot r1;
  r1.pos_x = crr_x;
  r1.pos_y = crr_y;



  if(dir == 0){
    r1.forward[0] = crr_x-1;
    r1.forward[1] = crr_y;
  }else if(dir == 1){
    r1.forward[0] = crr_x;
    r1.forward[1] = crr_y +1;
  }else if(dir == 2){
    r1.forward[0] = crr_x+1;
    r1.forward[1] = crr_y;
  }else if(dir == 3){
    r1.forward[0] = crr_x;
    r1.forward[1] = crr_y-1;
  }


  while(chk == 0){
    if(ch_arr[r1.forward[0]][r1.forward[1]] == 0){
      r1.pos_x = r1.forward[0];
      r1.pos_y = r1.forward[1];



    }



  }







  return 0;
}
