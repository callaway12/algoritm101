#include <stdio.h>
#include <iostream>
using namespace std;

int N;
int set[15][15] = {0};




int main(void){
  int count = 0;

  cin >> N;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(set[i][j] == 0){
        set[i][j] = 1;
        for(int k = 0; k < N; k++){
          for(int t = 0; t < N; t++){
            if(k == t){
              set[i][j] = 1;
            }else if(k-t == i-j){
              set[i][j] = 1;
            }else if(k+t == i+j){
              set[i][j] = 1;
            }
          }

        }

      }count++;
      for(int i = 0; i < N; i ++){
        for(int j = 0; j < N; j++){
          set[i][j] = 0;
        }
      }
    }
  }
  // for(int i = 0; i < N; i++){
  //   for(int j = 0; j < N; j++){
  //     cout << set[i][j];
  //   }
  //   printf("\n");
  // }
  // for(int i = 0; i < N; i++){
  //   for(int j = 0; j < N; j++){
  //     cout << arr[i][j];
  //   }
  //   printf("\n");
  // }
  //
  cout << count;
  return 0;
}
