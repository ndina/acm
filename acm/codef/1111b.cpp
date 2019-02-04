#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back

vector<int>v;

int main(){
	ll n, k, m;
	cin >> n >> k >> m;
	ll a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		v.pb(a[i]);

	}
	sort(v.begin(), v.end());

	reverse(v.begin(), v.end());

	for(int i = 0; i < m; i++){
		v[i] += k;
		res1 += v[i] / n;
	}
	ll a = 0, j = 0;
	for(int i = 0; i < n - 1 - a; i++ ){
		sum[j] += v[i];
        a--;
        j++;
	}
	for
	
	// for(int i = 0; i < n; i++){
	// 	cout << v[i] << " ";

	// }
}