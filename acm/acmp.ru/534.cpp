#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int cnt[1001010];

	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int m;
	cin >> m;
//	int a[m];
	int x;

	for(int i = 1; i <= m; i++){
		//int x;
		cin >> x;
		cnt[x]++;
	}

	for(int j = 1; j <= n; j++){
		cout << cnt[j] << " " ;
	}


}