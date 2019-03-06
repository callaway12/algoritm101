#include <iostream>
#include <stdio.h>
using namespace std;

int main(void){
    int t, f, in;

    cin >> in;
    f = in / 5;
    in %= 5;
    while(f >= 0){
      if(!(in%3)){
        t = in / 3;
        in %= 3;
        break;
      }
      f--;
      in += 5;

    }
    printf("%d", in == 0 ? f+t : -1);
    return 0;
}
