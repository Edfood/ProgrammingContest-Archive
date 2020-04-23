#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); ++i)

int main(void){
    // Your code here!
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
    }
    double maxv = 0;
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    rep(i, n) maxv += a[i];
    double minv = a[0];
    double sum = 0;
    rep(i, n) {
        if (i == 0) continue;
        sum += a[i];
    }
    minv = max(0.0, minv - sum);
    cout << maxv << " " << minv << endl;
}
