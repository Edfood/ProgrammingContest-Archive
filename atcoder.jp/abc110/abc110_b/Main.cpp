#include<iostream>
#include<cstdio>
using namespace std;


int main(){
  int n, m;
  int x, y;
  int z;
  int xn[100];
  int yn[100];
  bool ans = false;
  scanf("%d%d%d%d", &n, &m, &x, &y);

  for(int i = 0; i < n; i++){
    scanf("%d", &xn[i]);
  }
  for(int i = 0; i < m; ++i){
    scanf("%d", &yn[i]);
  }

  z = x + 1;

  if(x > y){
    printf("War\n");
    return 0;
  }

  while(z <= y){
    ans = false;
    for(int i =0; i < n; i++){
      if(z <= xn[i]){
        ans = true;
        break;
      }
    }

    for(int i = 0; i < m; ++i){
      if(z > yn[i]){
        ans = true;
        break;
      }
    }
    if(ans == false) break;
    z++;
  }

  if(ans){
    printf("War\n");
  } else {
    printf("No War\n");
  }

}
