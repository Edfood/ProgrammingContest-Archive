#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
#include<stack>
#include<numeric>
using namespace std;

typedef long long ll;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)


int main(){
  int a, b;
  cin >> a >>b;

  int tmp = b - a;


  int height = 1;
  int prevheight = 0;

  for(int i = 2; (height - prevheight) < tmp; ++i){
    prevheight = height;
    height += i;
  }
  cout << height - b << endl;
}
