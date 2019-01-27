#include <bits/stdc++.h>

using namespace std;

vector<int>prefix(string s){
	vector<int>p(n);
	for(int i = 0; i < s.size(); i++){
		int j = p[i - 1];
		while(j > 0 && s[i] != s[j]){
			j = p[j-1];
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
	vector<int>p = prefix(s);

	for(int i = 0; i < p.size(); i++){
		cout << p[i] << " ";
	}


}