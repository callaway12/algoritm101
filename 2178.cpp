#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int a, b;
int map[100][100] = {0};
int xarr[] = {-1, 1, 0, 0};
int yarr[] = {0, 0, 1, -1};
int nx, ny;
queue<pair<int, int> > q;


int main(void){
  scanf("%d %d", &a, &b);
  for(int i = 0; i < a; i++){
    for(int j = 0; j < b; j++){
      scanf("1%d", &map[i][j]);
    }
  }
  map[0][0] = 2;
  printf("%d %d", a, b);
  q.push(make_pair(0,0));
  while(!q.empty()){
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for(int i = 0; i < 4; i++){
      nx = x + xarr[i];
      ny = y + yarr[i];
      if(nx < 0 || nx > a-1 || ny < 0 || ny > b-1) continue;
			if(map[nx][ny] == 1){
				q.push(make_pair(nx,ny));
        map[nx][ny] = map[x][y]+1;
			}
    }
  }

  printf("%d\n",map[a-1][b-1]-1);

  return 0;

}
