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
	string s;
	cin >> n >> s;

	char a = 'A';

	rep(i, s.length()){
		s[i] = ((s[i] - a) + n) % 26 + a;
	}

	cout << s<< endl;


}