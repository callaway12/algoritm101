#include <stdio.h>
#include <iostream>
using namespace std;
int n, k;

int main(void){
  cin >> n >> k;
  int a = 1, b = 1;
  int t = n/2;

    for(int j = 0; j < k; j++){
      a *= (n - j);
      b += (j);
    }
    cout << a/b;




  return 0;
}
//why the fuck is wrong;
