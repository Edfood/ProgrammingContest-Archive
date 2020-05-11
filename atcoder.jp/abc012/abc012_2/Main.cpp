#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  int n;
  cin >> n;
  int hour = n / 3600;
  n %= 3600;
  int minute = n / 60;
  n %= 60;
  int second = n;

  printf("%02d:%02d:%02d\n", hour, minute, second);
}