#include <bits/stdc++.h>


using namespace std;

string f(int n, string s){
	if(n == 0){
		if(s.size() == 0) return "0";
		else return s;
	}

	return f(n/2, char(n%2 + 48) + s);
}

int main(){


	int n;
	cin >> n;
	cout << f(n, "");
	

	return 0;
}