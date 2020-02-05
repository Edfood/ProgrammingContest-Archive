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
#include<tuple>
using namespace std;


typedef pair<int, int> P;
typedef long long ll;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}


int main(){
	int n;
	cin >> n;
	
	vector<int> a(n);

	ll ans = 0;
	rep(i, n){
		int c;
		cin >> c;
		a[i] = c;
	}

	int count = 1;
	for(int i = 0; i < n; ++i){
		if(a[i] == count)	count++;
		else	ans++;
	}

	if(count == 1){
		cout << -1 << endl;
	} else {
		cout << ans << endl;
	}

}