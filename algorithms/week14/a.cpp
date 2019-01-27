000000-#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	vector<int>v;
	while(cin >> n){
		if(n == 0) break;
		else v.push_back(n);
	}

	sort(v.begin(), v.end());

	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
}