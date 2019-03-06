#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int n;
int f[100] = {0};
int out;
int pibo (int k){
    f[0] = 0;
    f[1] = 1;
    f[2] = 1;
    for(int i = 0; i < k-1; i++){
        f[i+2] = f[i+1] + f[i];
    }
    return f[k];
}

int main(void){
    cin >> n;
    out = pibo(n);
    cout << out;

    return 0;
}
