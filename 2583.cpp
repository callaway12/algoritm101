#include <stdio.h>
#include <iostream>
using namespace std;

int x[4] = {-1, 1, 0, 0};
int y[4] = {0,0,-1,1};
int map[101][101] = {0};
int arr[][4] = {0};
int M, N, K;


int main(void){
  cin >> M >> N >> K;


  for(int i = 0; i < K; i++){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1; i < x2; i++){
      for(int k = y1; k < y2; k++){
        map[i][k] = 1;
      }
    }
  }


  
  // for(int i = 0; i < N; i++){
  //   for(int k = 0; k < M; k++){
  //     printf("%d", map[i][k]);
  //   } printf("\n");
  // }

  return 0;

}
