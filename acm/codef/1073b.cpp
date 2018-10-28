#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	char b;
	string ans = "";

	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
		b = a[i];
		ans += b;
	}

	cout << ans;



	// int n;
	// cin >> n;

	// int a[n], b[n];

	// for(int i = 0; i < n; i++){
	// 	cin >> a[i];
	// }

	// for(int i = 0; i < n; i++){
	// 	cin >> b[i];
	// }


	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < n; j++){
	// 		if(b[i] == a[j]){
	// 			if(b[i] > b[i-1]){
	// 				cout << j - 
	// 			}
	// 			cout << j + 1 << " ";
	// 			if(b[i])
	// 		}
	// 	}
	// }


}