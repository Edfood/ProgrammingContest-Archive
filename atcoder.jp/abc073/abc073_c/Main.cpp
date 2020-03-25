#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  set<int> st;
  rep(i, n) {
    int a;
    cin >> a;
    if(st.find(a) == st.end()) st.insert(a);
    else st.erase(a);
  }
  cout << st.size() << endl;
}