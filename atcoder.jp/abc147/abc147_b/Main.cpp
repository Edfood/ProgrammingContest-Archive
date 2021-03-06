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
	string s;
	cin >> s;

	int l = 0, r = s.length() - 1;
	int ans = 0;
	while(true){
		if(l >= r)	break;
		if(s[l] != s[r])	ans++;
		l++;
		r--;
	}

	cout << ans << endl;

}