#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n], b[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	b[0] = a[n - 1];

	int k = 1;
	for(int i = n - 2; i >= 0; i--){
		int m = 0;
		for(int j = 0; j < n - i - 1; j++){
			if(a[i] == b[j]){
				m++;
			}
			if(m == 0){
				b[k] = a[i];
				k++;
			}
		}
	}

	cout << k << endl;
	for(int i = k - 1; i >= 0; i--){
		cout << b[i] << " ";
	}
}