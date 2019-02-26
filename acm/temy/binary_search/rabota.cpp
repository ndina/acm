#include <bits/stdc++.h>

using namespace std;

#define ll long long


ll binpow(ll a, ll n){
	if(n == 0) return 1;

	if(n & 1) {
		return binpow(a, n - 1) * a;
	}
	else{
		return binpow(a, n / 2) * binpow(a, n / 2);
	}
}

int main(){
	ll n, k;
	cin >> n >> k;
	ll sum = 0;
	sum += k;
	int cnt = 1;
	while(sum < n){
		if(sum / binpow(k, cnt)== 0){
			sum += n;
			//cout << sum << " ";
		}
		else{
			sum += sum/binpow(k, cnt);
			cnt++;
			cout << sum << " ";
		}
	}
	cout << sum;
	return 0;  
}