#include <iostream>
#include <vector>

using namespace std;

// dfs로 풀이
// 매 번 상, 하, 좌, 우로 분기한다
// 맨 앞에 있는 블록부터 움직이려는 방향의 끝으로 이동시킨다. 만일 움직이다가, 자신이 가야 할 방향에 다른 블록이 있고, 그 블록과 나의 수가 동일하면
// 나를 없애고, 내 앞의 블록의 수를 *2한다. 이 때, 연쇄적으로 합쳐지는 것은 불가능하므로 숫자가 늘어난(합쳐진)블록은 자신이 이미 합쳐졌다는것을 가지고 있는다.
// 모든 경우의 수에서 5번씩 움직인 후, 맵에 있는 숫자 중 가장 큰 것을 리턴한다.

int N, answer = 0;

vector<vector<int> > MoveUp(vector<vector<int> > map, vector<vector<bool> > merge) {
	//위. 맵의 맨 윗쪽부터 확인해서, 0이 아닌 수가 있으면 그 수를 다른 수 또는 맵의 맨 위쪽 끝까지 옮김.

	vector<vector<bool> > merged = merge; // merged는 이번에만 쓸 것이므로

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N;) {
			if (map[j][i] != 0 && j > 0) {
				if (map[j - 1][i] == 0) { // 움직일 곳이 0이면
					map[j - 1][i] = map[j][i]; // 0인 곳을 현재 숫자로 바꿔줌(위로 한 칸 옮김)
					map[j][i] = 0;
					j--;
					continue;
				}
				else if (map[j - 1][i] == map[j][i] && merged[j-1][i] == false) { // 움직일 곳의 수와 내 수가 같고, 움직일 곳이 합쳐지지 않았다면
					map[j - 1][i] *= 2; // 움직일 곳의 수를 *2
					map[j][i] = 0; // 현재 나를 0으로
					merged[j - 1][i] = true; // 움직일 곳이 합쳐졌다는 것을 알림
					continue;
				}
			}
			j++;
		}
	}

	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;*/

	return map;
}

vector<vector<int> > MoveDown(vector<vector<int> > map, vector<vector<bool> > merge) {
	//위. 맵의 맨 윗쪽부터 확인해서, 0이 아닌 수가 있으면 그 수를 다른 수 또는 맵의 맨 위쪽 끝까지 옮김.

	vector<vector<bool> > merged = merge; // merged는 이번에만 쓸 것이므로

	for (int i = 0; i < N; i++) {
		for (int j = N-1; j >= 0 ;) {
			if (map[j][i] != 0 && j < N-1) {
				if (map[j + 1][i] == 0) { // 움직일 곳이 0이면
					map[j + 1][i] = map[j][i]; // 0인 곳을 현재 숫자로 바꿔줌(위로 한 칸 옮김)
					map[j][i] = 0;
					j++;
					continue;
				}
				else if (map[j + 1][i] == map[j][i] && merged[j + 1][i] == false) { // 움직일 곳의 수와 내 수가 같고, 움직일 곳이 합쳐지지 않았다면
					map[j + 1][i] *= 2; // 움직일 곳의 수를 *2
					map[j][i] = 0; // 현재 나를 0으로
					merged[j + 1][i] = true; // 움직일 곳이 합쳐졌다는 것을 알림
					continue;
				}

			}
			j--;
		}
	}

	return map;
}

vector<vector<int> > MoveRight(vector<vector<int> > map, vector<vector<bool> > merge) {
	//위. 맵의 맨 윗쪽부터 확인해서, 0이 아닌 수가 있으면 그 수를 다른 수 또는 맵의 맨 위쪽 끝까지 옮김.

	vector<vector<bool> > merged = merge; // merged는 이번에만 쓸 것이므로

	for (int i = 0; i < N; i++) {
		for (int j = N - 1; j >= 0;) {
			if (map[i][j] != 0 && j < N - 1) {
				if (map[i][j+1] == 0) { // 움직일 곳이 0이면
					map[i][j+1] = map[i][j]; // 0인 곳을 현재 숫자로 바꿔줌(위로 한 칸 옮김)
					map[i][j] = 0;
					j++;
					continue;
				}
				else if (map[i][j+1] == map[i][j] && merged[i][j+1] == false) { // 움직일 곳의 수와 내 수가 같고, 움직일 곳이 합쳐지지 않았다면
					map[i][j+1] *= 2; // 움직일 곳의 수를 *2
					map[i][j] = 0; // 현재 나를 0으로
					merged[i][j+1] = true; // 움직일 곳이 합쳐졌다는 것을 알림
					continue;
				}

			}
			j--;
		}
	}


	return map;
}

vector<vector<int> > MoveLeft(vector<vector<int> > map, vector<vector<bool> > merge) {
	//위. 맵의 맨 윗쪽부터 확인해서, 0이 아닌 수가 있으면 그 수를 다른 수 또는 맵의 맨 위쪽 끝까지 옮김.

	vector<vector<bool> > merged = merge; // merged는 이번에만 쓸 것이므로

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N;) {
			if (map[i][j] != 0 && j > 0) {
				if (map[i][j - 1] == 0) { // 움직일 곳이 0이면
					map[i][j - 1] = map[i][j]; // 0인 곳을 현재 숫자로 바꿔줌(위로 한 칸 옮김)
					map[i][j] = 0;
					j--;
					continue;
				}
				else if (map[i][j - 1] == map[i][j] && merged[i][j - 1] == false) { // 움직일 곳의 수와 내 수가 같고, 움직일 곳이 합쳐지지 않았다면
					map[i][j - 1] *= 2; // 움직일 곳의 수를 *2
					map[i][j] = 0; // 현재 나를 0으로
					merged[i][j - 1] = true; // 움직일 곳이 합쳐졌다는 것을 알림
					continue;
				}

			}
			j++;
		}
	}


	return map;
}


void dfs(vector<vector<int> > map, vector<vector<bool> > merged, int count) {
	if (count == 5) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] > answer) {
					answer = map[i][j];
				}
			}
		}
		return;
	}

	dfs(MoveUp(map, merged), merged, count + 1);
	dfs(MoveDown(map, merged), merged, count + 1);
	dfs(MoveRight(map, merged), merged, count + 1);
	dfs(MoveLeft(map, merged), merged, count + 1);
}


int solution(vector< vector<int> > board) {
	int count = 0;

	N = board.size();

	vector<vector<int> > map(N);
	vector<vector<bool> > merged(N, vector<bool>(N, false));



	dfs(board, merged, count);



	return answer;
}
