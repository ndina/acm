#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){

	ll n;
	cin >> n;
	ll a[n];

	for(ll i = 0; i < n; i++){
		cin >> a[i];
	}
	ll sum = 0;

	sort(a, a + n);

	for(int i = 0; i < n / 2; i++){
		sum += (a[i] + a[n - 1 - i])*(a[i] + a[n - 1 - i]);
	}

	cout << sum;

	return 0;

}