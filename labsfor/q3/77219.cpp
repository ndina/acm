#include <bits/stdc++.h>

using namespace std;

int main(){
	map<string, int>m;
	string s;
	while(cin>>s){
		cout<<m[s] << " ";
		m[s]++;
	}

	return 0;
}