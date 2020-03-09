#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int n;
void rec(int d, string s){
  if (d >= n) {
    cout << s << endl;
    return;
  }

  rec(d + 1, s + "a");
  rec(d + 1, s + "b");
  rec(d + 1, s + "c");
}

int main(){
  cin >> n;
  rec(0, "");
}