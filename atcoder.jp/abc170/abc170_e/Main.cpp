#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;


int main() {
  int n, q;
  cin >> n >> q;
  vector<int> rate(n), pos(n);
  vector<multiset<int>> youchien(200100);
  multiset<int> maxs;

  auto addyouji = [&](int place, int i) {
    int highest = -1;
    if (youchien[place].size() != 0) highest = *youchien[place].rbegin();

    if (rate[i] > highest) {
      if (youchien[place].size() != 0) maxs.erase(maxs.find(highest));
      maxs.insert(rate[i]);
    }
    youchien[place].insert(rate[i]);

  };

  auto deleteyouji = [&](int place, int i) {
    int maxrate = *youchien[place].rbegin();
    youchien[place].erase(youchien[place].find(rate[i]));
    int nextMaxrate = -1;
    if (youchien[place].size() != 0) nextMaxrate = *youchien[place].rbegin();
    if (maxrate == rate[i]) {
      maxs.erase(maxs.find(maxrate));
      if (youchien[place].size() != 0) maxs.insert(nextMaxrate);
    }
  };

  rep(i, n) {
    cin >> rate[i] >> pos[i];
    pos[i]--;
    addyouji(pos[i], i);
  }

  rep(qi, q) {
    int id, next;
    cin >> id >> next;
    id--; next--;
    addyouji(next, id);
    deleteyouji(pos[id], id);
    pos[id] = next;
    int ans = *maxs.begin();
    cout << ans << endl;
  }
}