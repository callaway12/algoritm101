#include <stdio.h>
#include <iostream>
using namespace std;


int main(void){
  unsigned long long n;
  unsigned long long pibo[3] = {0,1};
  cin >> n;
  for(unsigned long long i = 0; i < n-1; i++){
    pibo[2] = pibo[1] + pibo[0];
    pibo[0] = pibo[1];
    pibo[1] = pibo[2];
  }
  cout << pibo[2];
  return 0;
}
