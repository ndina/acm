#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t;
	cin >> n >> t;
	int a[n], b[n];
	int mini = 10010;
	int ans, cnt = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
		if(b[i] <= t){
			if(a[i] < mini){
				mini = a[i];
			}
		}
		if(b[i] > t){
			cnt++;

		}
	}
	if(cnt == n){
		cout <<"TLE";
		return 0;
	}

	cout << mini;
	return 0;
}