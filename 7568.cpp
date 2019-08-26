#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main (void){

    int check_arr[51][2] = {0};
    int out_arr[51] = {0};

    int tmp = 0;
    cin >> tmp;

    for(int i = 0; i < tmp; i++){
        for(int j = 0; j < 2; j++){
            cin >> check_arr[i][j];
        }
    }

    for(int i = 0; i < tmp; i++){
        for(int j = 0; j < tmp; j++){
            if( check_arr[i][0] < check_arr[j][0] && check_arr[i][1] < check_arr[j][1]){
                out_arr[i]++;
            }
        }
    }



    for(int i = 0; i< tmp; i++){
        cout << out_arr[i]+1 << " ";
    }

    return 0;
}
