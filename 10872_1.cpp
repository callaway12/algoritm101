#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;
int main (void){
   int n;
scanf("%d",  &n);
int k = 1;
for(int i = 1; i <= n; i++){
  k = k * i;
}
  printf("%d \n", k);
  return 0;
}
