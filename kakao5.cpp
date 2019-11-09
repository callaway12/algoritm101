#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(void) {
int k;
  cin >> k;
vector<int> stones;
  stones.push_back(2);
  stones.push_back(4);
  stones.push_back(5);
  stones.push_back(3);
  stones.push_back(2);
  stones.push_back(1);
  stones.push_back(4);
  stones.push_back(2);
  stones.push_back(5);
  stones.push_back(1);




    int answer = 0;
    int tmp_min = 9999999, tmp_check;
    int min_int;
    int tmp_i;
    for(int j = 0; j < k; j++){
            tmp_min += stones[j];
    }
    cout << "tmp_min : " << tmp_min << endl;
    int check_k = k*k;
    printf(" check k : %d \n", check_k);

    printf("size : %d \n", stones.size());
    for(int i = 0; i <= stones.size()-k; i++){
        for(int j = i; j < k; j++){
            tmp_check += stones[j];
        }
        if(tmp_min >= tmp_check){
            tmp_min = tmp_check;
        }
        cout << tmp_min << endl;
        cout << tmp_check<< endl;
        if(check_k > tmp_min){
            tmp_i = i;
        }
    }

    int max_int;
    cout << "tmp_i : " <<tmp_i << endl;
    for(int j = tmp_i; j < k; j++){
        if(max_int <= stones[j]){
            max_int = stones[j];
        }
        printf("\n max_int: %d \n", max_int);
        cout << "stones : " <<stones[j] << endl;
    }


    int tmp_out = max_int;



    answer = tmp_out;

    cout << answer;
    return 0;
}
