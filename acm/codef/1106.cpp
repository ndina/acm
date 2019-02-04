#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(0); cin.tie (0);
	int n;
	cin >> n;
	char a[n][n];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	int cnt = 0;

	for(int i = 1; i < n - 1; i++){
		for(int j = 1; j < n - 1; j++){
			if(a[i][j] == 'X' && a[i - 1][j - 1] == 'X' && a[i - 1][j + 1] == 'X' && a[i + 1][j - 1] == 'X' && a[i + 1][j + 1] == 'X'){
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;


}