#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, a, b;
	double l = 0;
	cin >> n >> a;
	l += a;
	for(int i = 1; i < n; i++){
		cin >> b;
		l+=b;
	}
	l -= (double)(a+b)/2;

	cout <<fixed<< l/(n - 1) << setprecision(10);

	return 0;
}