#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;

int main(){
  int n, k;
  cin >> n >> k;

  if(((n + 1) / 2) - k >= 0){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
