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
#include<cassert>
using namespace std;


typedef pair<int, int> P;
typedef long long ll;

#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

const int mod = pow(10, 9) + 7;



int main(){

	double a, b, x;
	cin >> a >> b >> x;

	double s = x / a;
	double volume = a * b;

	double rad;

	if(s >= volume / 2){
		double h = (volume - s) * 2 / a;
		rad = atan2(h, a);
	} else {
		double w = s * 2 / b;
		rad = atan2(b, w);
	}

	double PI = acos(-1);
	double deg = (rad / (2 * PI)) * 360;

	printf("%.10f\n", deg);

}