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
	string s, t;
	cin >> s >> t;

	bool ans = false;
	for(int i = 0; i < s.length(); ++i){
		if(s == t)	ans = true;
		s = s[s.length() - 1] + s.substr(0, s.length() - 1);
	}
	if(ans)	cout << "Yes" << endl;
	else cout << "No" << endl;
}