#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

int main(){

	ll n, m, sum = 0, pow = 1, r, k, l;

	cin >> n >> k;

	l = 1;
	r = n;

	while(l + 1 < r){
		m = (l + r) / 2;

		while(m >= pow){
			sum += m/pow;
			pow*=k;
		}

		if(sum == n){cout << m; return 0;}
		else if(sum > n) r = m;
		else l = m;

		sum = 0;
		pow = 1;
	}

	cout << r << endl;


}