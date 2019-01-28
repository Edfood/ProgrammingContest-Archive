#include<stdio.h>
#include<vector>
#include<utility>
using namespace std;

int main(){
  int n, t;
  scanf("%d%d", &n, &t);

  vector<pair<int, int> > p(n);
  pair<int, int> min(1001, 1001);

  for(int i = 0; i < n; i++){
    scanf("%d%d", &p.at(i).first, &p.at(i).second);
  }

  for(int i = 0; i < n; ++i){
    if(min.first > p.at(i).first && p.at(i).second <= t){
      min.second = p.at(i).second;
      min.first = p.at(i).first;
    }
  }

  if(min.first == 1001){
    printf("TLE\n");
  } else {
    printf("%d\n", min.first);
  }

  return 0;
}
