#include <stdio.h>
#include <iostream>
using namespace std;

int f(int num){
  if(num == 0) return 1;
  int result = 1;
  for(int i = num; i >=1; i--){
    result *= i;
  }

  return result;
}

int main(void){
  int n, k;
  cin >> n >> k;

  cout << f(n)/(f(k) * f(n-k));


  return 0;
}
