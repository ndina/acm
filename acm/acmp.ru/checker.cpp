#include <iostream>
#include <cmath>
#include <deque>

using namespace std;

int main(){
    int n;

   deque<string> d1;
string s;
  for(int i = 0; i < 2;i++){
    cin >> s;
    d1.push_back(s);
  }

  for(int i = 0; i < d1.size(); i++){
    cout << d1[i]<< endl;
   // d1.pop_front();
  }
}