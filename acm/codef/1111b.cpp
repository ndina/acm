#include <bits/stdc++.h>
#include <iomanip>


using namespace std;
#define d double

int main(){

	int n, k, m;

	cin >> n >> k >> m;

	d sum = 0;

	d a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum += a[i];
	}

	sort(a, a + n);

	d ans = 0;

	for(int i = 0; i <= min(m, n); i++){
	    if(i == n) break;
		d add = sum;
		add += min(k * (n - i), m - i);
		ans = max(ans, (d(add))/(n - i));
		sum -= a[i];
	}
    
	cout <<fixed<< setprecision(10);
	cout  << ans << endl;
	return 0;
}