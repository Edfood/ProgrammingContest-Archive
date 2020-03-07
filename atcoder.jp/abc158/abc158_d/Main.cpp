#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s;
  cin >> s;
  int q;
  cin >> q;
  int count = 0;
  
  deque<char> dq;
  rep(i, s.length()){
    dq.push_back(s[i]);
  }

  rep(i, q){
    int t;
    cin >> t;
    if(t == 1){
      count++;
    } else {

      int f;
      char c;
      cin >> f >> c;
      if((count + f) % 2){
        dq.push_front(c);
      } else {
        dq.push_back(c);
      }
    }
  }
  if(count % 2) reverse(dq.begin(), dq.end());
  rep(i, dq.size()) cout << dq[i];
  cout << endl;
}