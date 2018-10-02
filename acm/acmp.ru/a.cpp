#include <iostream>
#include <cmath>
using namespace std;

int main(){
 string s;
 cin >> s;
 int cnt = 0;
 for(int i = 0; i < s.size(); i++){
 	cnt += int(s[i]);
 }
 if(cnt < 2083){
 	cout << "NO";
 }
 else{
 	cout <<"YES";
 }

 return 0;
}