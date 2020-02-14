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
	vector<int> c(n), s(n), f(n);
	f[n - 1] = 1;
	rep(i, n - 1)	cin >> c[i] >> s[i] >> f[i];
	for(int i = 0; i < n; ++i){
		int time = s[i];
		for(int j = i; j < n; ++j){
			if(time < s[j])	time = s[j];
			if(time % f[j]) time += f[j] - time % f[j];
			time += c[j];
		}
		cout << time << endl;
	}
}
