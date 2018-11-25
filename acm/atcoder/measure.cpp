#include <bits/stdc++.h>

using namespace std;

int main(){


	string s;
	cin >> s;
	string t;
	if(s.size() == 2){
		cout << s;
	}
	else{
	     reverse(s.begin(), s.end());
		cout<< s;
	}

	return 0;


}