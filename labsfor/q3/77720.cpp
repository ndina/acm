#include <bits/stdc++.h>

using namespace std;

string rec(string s){
	if(s.size() == 1){
		return "Yes";
	}
	else{
		if(s.substr(0, 1) == s.substr(s.size() - 1, s.size())){
			if(s.size() == 2){
				return "Yes";
			}
			return rec(s.substr(1, s.size() - 1));
		}
		else{
			return "No";
		}
    }
}

int main(){
	string s;
	cin >> s;
	cout << rec(s);
	return 0;
}