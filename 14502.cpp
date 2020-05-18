#include <iostream>
using namespace std;

int a[5] = { 9, 1, 5, 10, 3};
int main(void){
  int count = 0;
  for (int i = 0; i<4; i++){

  for (int j = 0; j<4 - i; j++){

  if (a[j] > a[j + 1])

  {

  int tmp = a[j]; a[j] = a[j + 1]; a[j + 1] = tmp;
  count++;


  }

  }

  }
  cout << count;
}
