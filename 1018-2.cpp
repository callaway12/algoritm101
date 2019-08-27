#include <iostream>
using namespace std;
#define INF 0x3f3f3f3f

int n, m;
char p[100][100];
int foo(int x, int y) {
    if (x + 7 >= n || y +7 >= m) return INF;
    int a = 0, b = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int nx = x + i, ny = y + j;

            if ((i + j) % 2 == 0)
                if (p[nx][ny] != 'W') a++;
                else b++;
            else if ((i + j) % 2 != 0)
                if (p[nx][ny] != 'B') a++;
                else b++;
        }
    }
    return a < b ? a : b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    int ans = INF;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int val = foo(i, j);
            ans = ans < val ? ans : val;
        }
    }
    cout << ans;
}
