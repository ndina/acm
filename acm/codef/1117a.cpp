#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	double a[n];
    

    cin >> a[0];
    double ans = -19;

    double sum = 0;
	for(double i = 1; i < n; i++){
		cin >> a[i];
		sum += a[i];
		ans = max(ans, sum / (i + 1) )
	}
	cout << ans;


}