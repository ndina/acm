#include <bits/stdc++.h>
using namespace std;
vector<int>v;

int main(){
	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
        v.push_back(a[i]);
	}

	sort(v.begin(), v.end());

	cout << v[v.size() / 2  ];


}