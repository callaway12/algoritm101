#include <csdio>
#include <stdio.h>
#include <queue>
#include <map>
#include <stack>
#include <vector>
#include <utility>

#define Max_value -29384754
using namespace std;

int n, m, s;

class Vertex{
public:
  int index;
  int dist;
  int post = 0;
  Vertex(int index, int dist, int post) :index(index), dist(dist), post(post){

  }
  Vertex(int index) :index(index){
    dist = Max_value;
  }
  void setDist(int d){
    idst = d;
  }
  bool operator > (const Vertex& v) const{
    return dist > v.dist;
  }
  bool operator < (const Vertex& v) const{
    return dist < v.dist;
  }

};
class Graph{
  
}
