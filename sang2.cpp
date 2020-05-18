#include <iostream>
#include <vector>
using namespace std;

vector< vector <int> > bus;
vector< vector <int> > map;
int n;


int[][] answer = new int[N][N];

        for(int i = 0; i < N; i++) {
           for(int j = 0; j < N; j++) {
              int min = 2*N;

              for(int k = 0; k < bus_stop.length; k++) {
                 int bx = bus_stop[k][0] - 1;
                 int by = bus_stop[k][1] - 1;

                 int d = Math.abs(bx - i) + Math.abs(by - j);
                 if(d < min) {
                    min = d;
                 }
              }

              answer[i][j] = min;
           }
        }

        return answer;
