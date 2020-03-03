#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<pair<int, int>> b(n);
  rep(i, n){
    cin >> b[i].first;
    b[i].second = i;
  }
  sort(b.begin(), b.end());
  int cur = 0;
  int pre = b[0].first;
  rep(i, n){
    if(b[i].first != pre){
      cur++;
      pre = b[i].first;
    }
    b[i].first = cur;
    swap(b[i].first, b[i].second);
  }
  sort(b.begin(), b.end());
  rep(i, n) cout << b[i].second << endl;
  
}