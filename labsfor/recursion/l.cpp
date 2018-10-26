#include <iostream>

using namespace std;

string f(string s, int i, int j){
	if(i > j) return "Yes";
	if(s[i] != s[j]) return "No";
	return f(s, i + 1, j - 1);
  
 }

int main(){

	string s;
	cin >> s;

	cout <<f(s, 0, s.size() - 1);

	return 0;
}