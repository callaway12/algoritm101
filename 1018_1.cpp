#include <iostream>
using namespace std;

int N, M, minimum = 2e9;
char boardTypeA[8][8], boardTypeB[8][8], board[50][50];

int check(int x, int y) {
	int black_cnt = 0, white_cnt = 0;
	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if (boardTypeA[i - x][j - y] != board[i][j])
				black_cnt++;
			if (boardTypeB[i - x][j - y] != board[i][j])
				white_cnt++;
		}
	}
	return black_cnt > white_cnt ? white_cnt : black_cnt;
}

int main() {
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 8; c++) {
			bool col = ((r + c) & 1);
			boardTypeA[r][c] = (col) ? 'B' : 'W';
			boardTypeB[r][c] = (col) ? 'W' : 'B';
		}
	}

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < N - 7; i++) {
		for (int j = 0; j < M - 7; j++) {
			int result = check(i, j);
			if (result < minimum)
				minimum = result;
		}
	}
	cout << minimum << '\n';
	return 0;
}
