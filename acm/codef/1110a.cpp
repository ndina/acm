#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back


int main(){

	ll b, k;
	cin >> b >> k;
	ll a[k];
	ll sum = 0;
	ll n = 0;
	for(int i = k; i >=1; --i){
		cin >> a[i];
		sum += a[i] * pow(b, k - 1);
		k--;
	   
	}

	if(sum % 2 == 0){
		cout << "even";
	}
	else{
		cout << "odd";
	}

}