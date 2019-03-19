#include <stdio.h>
#include <iostream>
using namespace std;

unsigned long long int f(unsigned long long int num){
  if(num == 0) return 1;
  unsigned long long int result = 1;
  for(unsigned long long int i = num; i >=1; i--){
    result *= i;
  }

  return result;
}

int main(void){
  unsigned long long int n, k;
  cin >> n >> k;
  unsigned long long int a = 1000000007;
  unsigned long long int out = (f(n)/(f(k) * f(n-k))) % a;
  printf("%llu", out);

  return 0;
}
