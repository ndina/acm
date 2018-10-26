#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

int main(){
	int n;
	cin >> n;
	int cnt = 0;
	int b[n];

    int ans;
	for(int i = 1; i <= n; i++){
		b[cnt++] = i;		
	}

	ans = b[0];

	for(int i = 1; i < n; i++){
		ans = (ans * b[i]) / gcd(ans, b[i]);
	}

	cout << ans;
}