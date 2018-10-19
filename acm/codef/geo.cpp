#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b, c, r;

	cin >> a >> b >> c>> r;

	double res;
	if(a <= r || b <= r || c <= r){
		cout << -1 ;
		return 0;
	}

	res = (a + b + c) / 2 * r;

	printf("%.6f", res);
}