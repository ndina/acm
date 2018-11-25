#include <bits/stdc++.h>

using namespace std;

vector<int> prefix_function(string s){
	int n = s.size();
	vector<int> p(n);
	
	for(int i = 1; i < n; i++){
		int j = p[i -1];
		while(j > 0 && s[i] != s[j]){
			j = p[j - 1];
		}
		if(s[i] == s[j]){
			j++;
			p[i] = j;
		}
	}
	return p;
}

int main(){

	string s;
	cin >> s;
	vector<int>v = prefix_function(s);

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}

	return 0;
}