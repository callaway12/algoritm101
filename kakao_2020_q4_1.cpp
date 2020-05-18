#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int N, M;
vector<vector<int>> map1;
vector<vector<int>> map2;
const int dx[]={-1,1,0,0};
const int dy[]={0,0,1,-1};
void bfs(int x, int y, vector<vector<int>> map);
int pre_x = 0;
int pre_y = 0;
int solution(vector<vector<int>> board) {

    int answer = 0;
    int size = board.size();
    map1 = board;
    map2 = board;
    N = size;
    M = size;
    bfs(0, 1, map1);
    bfs(1, 0, map2);
    int tmp1 = map1[N-1][M-1];
    int tmp2 = map2[N-1][M-1];
    cout << "tmp1 : " << tmp1 << "\n";
    cout << "tmp2 : " << tmp2 << "\n";
    cout << "size : " << size << "\n";
      if(tmp1 > tmp2){
        answer = tmp1;
      }
      else{
        answer = tmp2;
      }
    return answer;
}

void bfs(int x, int y, vector<vector<int>> map){
	queue<pair<int, int> > q;
	q.push(make_pair(x,y));
	while(!q.empty()){
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for(int k = 0 ; k < 4; k++){
			int nx = x + dx[k];
			int ny = y + dy[k];
			if(nx < 0 || nx > N-1 || ny < 0 || ny > M-1) continue;
			if(map[nx][ny] == 0){
				q.push(make_pair(nx,ny));
                // if(pre_x != nx && pre_y != ny){
                //   map[nx][ny]=map[x][y]+500;
                // }
                // else{
                //   map[nx][ny]=map[x][y]+100;
                // }
                map[nx][ny]=map[x][y]+1;
			}
		}
	}
}
