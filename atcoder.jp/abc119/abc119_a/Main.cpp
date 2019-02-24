#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<cmath>
#include<climits>

using namespace std;

int main(){
  string s;
  cin >> s;
  int year, month, day;
  string temp;

  temp = s.substr(0,4);
  year = stoi(temp);
  temp = s.substr(5, 2);
  month = stoi(temp);
  if(year == 2019){
    if(month > 4){
      cout << "TBD" << endl;
    }else {
      cout << "Heisei" << endl;
    }
  } else if(year > 1029){
    cout << "TBD" << endl;
  } else {
    cout << "Heisei" << endl;
  }

}
