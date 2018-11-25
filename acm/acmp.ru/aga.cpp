#include <bits/stdc++.h>

using namespace std;

vector<double> v;
vector<string>vv;

int main(){
	int n;
	cin >> n;
	while(n--){
		int l;
		cin >> l;
		int a[l], b[l];

		for(int i = 0; i < l; i++){
         cin >> a[i] >>b[i];
         v.push_back(a[i]);
         vv.push_back(b[i]);
		}
	}


	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " " << vv[i];
	}

	return 0;
}