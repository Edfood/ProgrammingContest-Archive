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
#include<iomanip>
using namespace std;


typedef pair<int, int> P;
typedef long long ll;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main(){
	int n;
	cin >> n;

	vector<double> x(n), y(n), p(n);
	rep(i, n){
		cin >> x[i] >> y[i];
		p[i] = i;
	}

	double ans = 0;

	int count = 0;
	do{

		for(int i = 1; i < n;++i){
			double dx = x[p[i]] - x[p[i - 1]];
			double dy = y[p[i]] - y[p[i - 1]];
			ans += sqrt(pow(dx, 2) + pow(dy, 2));
		}
		count++;

	}while(next_permutation(p.begin(), p.end()));

	cout << fixed << setprecision(9) << ans / count << endl;
}