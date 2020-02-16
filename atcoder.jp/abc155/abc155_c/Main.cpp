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
#include<set>
#include<iomanip>
#include<map>
#include<type_traits>
#include<tuple>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  int n;
  cin >> n;
  map<string, int> m;
  rep(i, n){
    string s;
    cin >> s;
    m[s]++;
  }
  auto begin = m.begin(), end = m.end();
  int count = 0;
  for(auto iter = begin; iter != end; iter++){
    count = max(count, iter->second);
  }
  vector<string> ans;
  for(auto iter = begin; iter != end; iter++){
    if(iter->second == count) ans.push_back(iter->first);
  }
  sort(ans.begin(), ans.end());
  rep(i, ans.size()){
    cout << ans[i] << endl;
  }
}
