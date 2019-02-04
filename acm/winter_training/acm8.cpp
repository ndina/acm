#include <bits/stdc++.h>

using namespace std;

stack<int>st;
vector<char>v;

#define pb push_back

int main(){
	int n;
	cin >> n;
	int cnt = 0;
	char c;
	for(int i = 0; i < n; i ++){
		cin >> c;
		v.pb(c);
	}

	for(int i = n - 1; i > 0; i--){
		if(v[i] == 'O'){
			index = i;
			break;
		}
	}


}