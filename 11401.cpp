#include <stdio.h>
#include <iostream>
using namespace std;
unsigned long long n, k;

int main(void){
  scanf("%llu %llu", &n, &k);


  unsigned long long a = 1, b = 1;

    for(unsigned long long j = 0; j < k; j++){
      a *= (n - j);
      b *= (j);
    }
    // cout << a/b;
    printf("%llu", a/b);



  return 0;
}
