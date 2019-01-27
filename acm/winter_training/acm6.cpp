#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
#define ll long long

int main(){
	ll n, x;
	cin >> n >> x;
	ll a[n], cnt = 0;


	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] * 2 >  x){
			cnt++;
		}
	}

	cout << n - cnt;

	return 0;
}