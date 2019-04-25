
#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){

int o[100][100] = {0};

int n = 3, m = 5;

    for(int i = 0; i <= m; i++){
        o[i][n] = 2*(m-1);
    }
    for(int j = 0; j <=n; j++){
        o[m][j] = 2+(n-j);
    }

    for(int i = 0; i <= m; i++){
        for(int j = 0; j <=n; j++){
            cout << o[i][j];
        }
        cout << endl;
    }

    return 0;
}
