#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int map[22][22] = {-1};
struct dice{
  int top;
  int left;
  int right;
  int front;
  int back;
  int bottom;
  int pos_x;
  int pos_y;
}


int main (void){
  int n, m, x, y, k;
  cin >> n >> m >> x >> y >> k;

  struct dice d;

  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      cin >> map[i][j];
    }
  }
  d.pos_x = x+1;
  d.pos_y = y+1; // 밖으로 안나가게 보험






  return 0;
}
