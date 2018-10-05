#include <iostream>
#include<algorithm>

using namespace std;

string f(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'z'){
			s[i] = 'a';
		}
		else if(s[i] >= 'a' && s[i] < 'z'){
			s[i] = s[i] + 1;
		}
	}
	return s;
}


int main(){

	string s;

	cin >> s;

   cout <<f(s);
}