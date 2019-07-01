#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

int in_arr[101][101] = {0};
int visited[101] = {0};
int in = 0;


void dfs(int j){
  for(int k = 0; k < in; k++){
    if(in_arr[j][k] && !visited[k]){
      visited[k] =1;
      dfs(k);
    }
  }
}



int main(void){
  cin >> in;

  for(int i = 0; i < in; i++){
    for(int j = 0; j < in; j++){
      cin >> in_arr[i][j];

    }
  }

  for(int i = 0; i < in; i++){
    memset(visited,0,sizeof(visited));
    dfs(i);
    for(int j = 0; j < in; j++){
      if(visited[j]){
        in_arr[i][j] = 1;
      }
    }
  }
  for(int i = 0; i < in; i++){
    for(int j = 0; j < in; j++){
      cout << in_arr[i][j] << " ";


    }
    cout << endl;
  }



  return 0;
}
