#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int check = 0;
int max_tmp = 0;

int main(void){

  for(int i = 0; i < 4; i++){
    int tmp1 = 0;
    int tmp2 = 0;
    cin >> tmp1 >> tmp2;

    check -= tmp1;
    check += tmp2;

    if(max_tmp < check){
      max_tmp = check;
    }

  }


  cout << max_tmp;



  return 0;
}
