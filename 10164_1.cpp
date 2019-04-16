#include <stdio.h>
using namespace std;

int n, m, k;

int map[16][16];
int d[16][16];

int main() {
    scanf("%d %d %d", &n, &m, &k);
    d[1][1] = 1;
    int cnt = 0;
    int mx, my;

    if (k == 0) {
        mx = 1;
        my = 1;
    }
    else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cnt++;
                if (cnt == k) {
                    mx = i;
                    my = j;
                    break;
                }
            }
        }
    }

    for (int i = 1; i <= mx; i++) {
        for (int j = 1; j <= my; j++) {
            d[i][j] += d[i - 1][j] + d[i][j - 1];
        }
    }

    int x = d[mx][my];
    d[mx][my] = 1;

    for (int i = mx; i <= n; i++) {
        for (int j = my; j <= m; j++) {
            if (i == mx && j == my) {
                continue;
            }
            d[i][j] += d[i - 1][j] + d[i][j - 1];
        }
    }
    int y = d[n][m];
    printf("%d\n", x*y);
}
