#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
const int mod = 1000000007;

int main(){
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  cout << char(s1[0] - 'a' + 'A') << char(s2[0] - 'a' + 'A') << char(s3[0] - 'a' + 'A') << endl;
}