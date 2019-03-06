#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

int N, k, cnt[25*25];
int map[25][25];
int dx[] = {1, -1, 0 , 0};
int dy[] = {0, 0, 1 , -1};


void dfs(int x, int y){
	map[x][y] = 0;
	cnt[k]++;
	for(int i = 0; i < 4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(map[nx][ny] == 1)
			dfs(nx, ny);
	}

}

int main (void){

	cin >> N;

	for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) scanf("%1d", &map[i][j]);

	for(int i = 0; i < N; i++) for(int j = 0; j < N; j++)
		if(map[i][j] == 1) dfs(i,j), k++;


	sort(cnt, cnt+k);

	printf("%d\n", k);
	for(int i = 0; i < k; i++)
		printf("%d\n", cnt[i]);


	return 0;

}
