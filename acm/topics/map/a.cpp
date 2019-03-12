#include <bits/stdc++.h>

using namespace std;

int main(){

	map<string, int> m;
	m["Ast"] = 101001;
	m["Almaty"] = 1002323;
	m["Shymkent"] = 343534;
	m["Uralsk"] = 32435;

	map<string, int>::iterator it;

	for(it = m.begin(); it != m.end(); it++){
		string key = it->first;
		cout << m[key] << " ";
	}

	return 0;
}