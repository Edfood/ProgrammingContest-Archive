#include <bits/stdc++.h>
using namespace std;

int main() {
  int a , ans = 0;
  cin >> a;
  ans = a % 2;
  a= a / 10;
  ans += a%2;
  a= a/10;
  ans += a%2;
  cout << ans << endl;
}