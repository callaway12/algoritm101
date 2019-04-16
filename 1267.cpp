#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int x = 0, y = 0;
int xx = 0, yy = 0;

int t = 0;
int arrx[21] = {0};
int arry[21] = {0};

int main(void){

  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> arrx[i];
  }
  for(int i = 0; i < t; i++){
    arry[i] = arrx[i];
  }


  for(int i = 0; i < t; i++){
    if(arrx[i]/30 == 0){
      xx++;
    }else
    xx += (arrx[i]/30 + 1) ;
  }
  for(int i = 0; i < t; i++){
    if(arry[i]/60 == 0){
      yy++;
    }else
    yy += (arry[i]/60 + 1);
  }


  y = yy*15;
  x = xx*10;

  if(x < y){
    printf("Y %d", x);
  }else if(x > y){
    printf("M %d", y);
  }else if(x == y){
    printf("Y M %d", x);
  }




  return 0;
}
