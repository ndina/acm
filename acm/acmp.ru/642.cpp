#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
#define ll long long
int main(){
	ll n, s;
	cin >> n >> s;

	ll a[n];

	ll cnt = 0, sum = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	sort(a, a + n);

	for(int i = 0; i < n; i++){
		if(a[0] > s){
			cout << 0;
			return 0;
		}
		sum += a[i];
		cnt++;
		if(sum > s){
			cout << cnt - 1;
			return 0;
		}
	}

	cout << n;


	return 0;

}