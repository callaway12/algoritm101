#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main(void){


  int X = 0;
  int tmp = 64;
  int real = 0;
  int count = 0;
  cin >> X;


    if(X == 64){
      cout << 1;
    }else{
      while(X != real){
        tmp = tmp/2;
        if(tmp+real > X){
          continue;
        }
        real += tmp;
        count++;
      }
      cout << count;

    }









  return 0;
}
