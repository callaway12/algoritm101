#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int n, x;
int arr[10001] = {0};
int out_arr[10001] = {0};
int cnt = 0;

int main(void){


  cin >> n >> x;

  for(int i = 0; i < n; i++){

    cin >> arr[i];
    if(arr[i] < x){
      out_arr[cnt] = arr[i];
      cnt++;
    }
  }

  for(int i = 0; i < cnt; i++){
    printf("%d ", out_arr[i]);
  }


  return 0;
}
