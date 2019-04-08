#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <time.h>     //time

using namespace std;

int main(void){

  int i, ranvals[1000];

  srand((unsigned int)time(NULL));

  for(int a = 0; a < 1000; a++){
    ranvals[a] = rand()%1000;
  }

  for(int a = 0; a < 1000; a++){
    cout << ranvals[a] << endl;
  }




  return 0;
}
