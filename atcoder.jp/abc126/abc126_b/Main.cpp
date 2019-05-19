#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>
#include<queue>
using namespace std;


int main(){
  string s;
  cin >> s;
  string tmp1 = s.substr(0, 2);
  int tmp2 = stoi(tmp1);
  tmp1 = s.substr(2, 2);
  int tmp3 = stoi(tmp1);

  if((tmp2 > 12 && (tmp3 <=12 && tmp3 >0)) ||(tmp2 == 0  && (tmp3 > 0 && tmp3 <= 12))){
    cout << "YYMM" << endl;
  } else if (((tmp2 <= 12 && tmp2 > 0) && tmp3 > 12) || ((tmp2 > 0 && tmp2 <= 12) && tmp3 == 0 )){
    cout <<"MMYY" << endl;
  } else if ((tmp2 <= 12 && tmp2 > 0) && (tmp3 <=12 && tmp3 >0)){
    cout << "AMBIGUOUS" << endl;
  } else {
    cout << "NA" << endl;
  }


}
