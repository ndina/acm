#include <bits/stdc++.h>

using namespace std;

vector<int>v, vv;

int main(){

	int n;
	cin >> n;
	int a[n];

	for(int i =01; i <n; i++){
		cin >> a[i];
		v.push_back(a[i]);
	}

	int m;
	cin >> m;
	int l, b;
	cin >> l >> b;

	v.erase(v.begin() + (m - 1));
	v.erase(v.begin() + (l-1), v.begin() + (b ));


	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}

	return 0;
     


}