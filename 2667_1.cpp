#include <stdio.h>
#include <algorithm>
using namespace std;


const int dx[] = { 0,0,-1,1 };
const int dy[] = { -1,1,0,0 };
int n, k = 0, cnt[25 * 25]; //왜 k 값 초기화 안해도 되는지.
int arr[25][25];

void dfs(int x, int y) {
    arr[x][y] = 0; cnt[k]++; //계수정렬느낌   왔던데를 0으로 초기화하고 해당 키값의 배열값으로 갯수를 저장.
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (arr[nx][ny] == 1) dfs(nx, ny); //포인터가 옮겨지면 거기서 1인지 확인하고 1이면 새 포인터 좌표로 dfs시작.
    }
}

int main() {
    int i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) for(j = 0; j < n; j++) scanf("%1d", &arr[i][j]);

    for (i = 0; i < n; i++) for (j = 0; j < n; j++)
        if (arr[i][j] == 1) dfs(i, j), k++;

    sort(cnt, cnt + k);

    printf("%d\n", k);
    for (i = 0; i < k; i++) printf("%d\n", cnt[i]);

    return 0;
}
