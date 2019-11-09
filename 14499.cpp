#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int map[22][22];
int mov_x[4] = {0, 1, 0, -1};
int mov_y[4] = {1, 0, -1, 0}; // 위 오 밑 좌
queue<int> q;

struct dice{
  int top;
  int left;
  int right;
  int front;
  int back;
  int bottom;
  int pos_x;
  int pos_y;
};


int main (void){
  int n, m, x, y, k;
  cin >> n >> m >> y >> x >> k;


  for(int i = 0; i < 22; i++){
    for(int j = 0; j < 22; j++){
      map[i][j] = -1;
    }
  }


  struct dice d;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cin >> map[i][j];
    }
  }





  for(int i = 0; i < k; i++){
    int temp;
    cin >> temp;
    q.push(temp);
  }

  d.top = 1;
  d.bottom = 6;
  d.left = 4;
  d.right = 3;
  d.back =2;
  d.pos_x = x+1;
  d.pos_y = y+1; // 밖으로 안나가게 보험


  while(!q.empty()){
    int instruction = q.front();
    q.pop();
    dice tmp;



    if(instruction == 1){
      // printf("inst 1\n");
      tmp.pos_x = d.pos_x + 1;
      tmp.pos_y = d.pos_y;

      // cout << d.pos_x << " " << d.pos_y << endl;
      // cout << tmp.pos_x << " " << tmp.pos_y << endl;


      if(map[tmp.pos_x][tmp.pos_y] != -1){
        // 주사위 앞구르기
        // printf("inst 1 우구르기 \n");
        d.pos_x += 1;
        d.pos_y += 0;

        tmp.top = d.top;
        tmp.front = d.front;
        tmp.bottom = d.bottom;
        tmp.back = d.back;
        tmp.left = d.left;
        tmp.right = d.right;

        d.top = tmp.left;
        d.right = tmp.top;
        d.left = tmp.bottom;
        d.bottom = tmp.right;
        // 주사위 재정렬
        if(map[d.pos_x][d.pos_y] == 0){
          map[d.pos_x][d.pos_y] = d.bottom;

        }else{
          d.bottom = map[d.pos_x][d.pos_y];
          map[d.pos_x][d.pos_y] = 0;
        }
        cout << d.top;
      }

    }else if(instruction == 2){
      // printf("inst 2 \n");
      tmp.pos_x = d.pos_x - 1;
      tmp.pos_y = d.pos_y;

      // cout << d.pos_x << " " << d.pos_y << endl;
      // cout << tmp.pos_x << " " << tmp.pos_y << endl;


      if(map[tmp.pos_x][tmp.pos_y] != -1){
        // 주사위 앞구르기
        // printf("inst 2 왼구르기 \n");
        d.pos_x -= 1;
        d.pos_y += 0;

        tmp.top = d.top;
        tmp.front = d.front;
        tmp.bottom = d.bottom;
        tmp.back = d.back;
        tmp.left = d.left;
        tmp.right = d.right;

        d.top = tmp.right;
        d.left = tmp.top;
        d.bottom = tmp.left;
        d.right = tmp.bottom;
        // 주사위 재정렬
        if(map[d.pos_x][d.pos_y] == 0){
          map[d.pos_x][d.pos_y] = d.bottom;

        }else{
          d.bottom = map[d.pos_x][d.pos_y];
          map[d.pos_x][d.pos_y] = 0;
        }
        cout << d.top;
      }

    }else if(instruction == 3){
      // printf("inst 3 \n");
      tmp.pos_x = d.pos_x ;
      tmp.pos_y = d.pos_y - 1;

      // cout << d.pos_x << " " << d.pos_y << endl;
      // cout << tmp.pos_x << " " << tmp.pos_y << endl;

      if(map[tmp.pos_x][tmp.pos_y] != -1){
        // 주사위  구르기
        // printf("inst 3 뒤구르기 \n");
        d.pos_x += 0;
        d.pos_y -= 1;

        tmp.top = d.top;
        tmp.front = d.front;
        tmp.bottom = d.bottom;
        tmp.back = d.back;
        tmp.left = d.left;
        tmp.right = d.right;

        d.top = tmp.front;
        d.front = tmp.bottom;
        d.bottom = tmp.back;
        d.back = tmp.top;
        // 주사위 재정렬
        if(map[d.pos_x][d.pos_y] == 0){
          map[d.pos_x][d.pos_y] = d.bottom;

        }else{
          d.bottom = map[d.pos_x][d.pos_y];
          map[d.pos_x][d.pos_y] = 0;
        }

        cout << d.top;

      }


    }else if(instruction == 4){
      // printf("inst 4 \n");

      tmp.pos_x = d.pos_x ;
      tmp.pos_y = d.pos_y + 1;

      // cout << d.pos_x << " " << d.pos_y << endl;
      // cout << tmp.pos_x << " " << tmp.pos_y << endl;

      if(map[tmp.pos_x][tmp.pos_y] != -1){
        // 주사위 앞구르기
        // printf("inst 4 앞구르기 \n");
        d.pos_x += 0;
        d.pos_y += 1;

        tmp.top = d.top;
        tmp.front = d.front;
        tmp.bottom = d.bottom;
        tmp.back = d.back;
        tmp.left = d.left;
        tmp.right = d.right;

        d.top = tmp.back;
        d.front = tmp.top;
        d.bottom = tmp.front;
        d.back = tmp.bottom;
        // 주사위 재정렬
        if(map[d.pos_x][d.pos_y] == 0){
          map[d.pos_x][d.pos_y] = d.bottom;

        }else{
          d.bottom = map[d.pos_x][d.pos_y];
          map[d.pos_x][d.pos_y] = 0;
        }
        cout << d.top;
      }

    }

  }


printf("\n");

  for(int i = 0; i <= n+1; i++){
    for(int j = 0; j <= m+1; j++){
      cout << map[i][j] << " ";
    }
    printf("\n");
  }

  return 0;
}























///////
