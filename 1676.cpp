#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;
int n;

int d(int num){
  int count = 0;

  if(num%10 != 0){
    return count;
  }else{
    num = num / 10;
    count++;
    return d(num);
  }
}

int f(int num){
  if(num == 0) return 1;
  else{
    return num * f(num - 1);
  }
}

int main (void){

  cin >> n;

  cout << d(f(n));



  return 0;
}
