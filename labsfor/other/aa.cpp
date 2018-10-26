#include <bits/stdc++.h>

using namespace std;

string f(int n){

	if(n % 2 == 0) return "Yes";

	return "No";
}

int main(){

	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++){
		cout << i << " " <<f(i) << endl;
	}


	return 0;
}