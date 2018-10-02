#include <iostream>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n], b[k];
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < k; i++){
		cin >> b[i];
	}
	for(int i = 0; i < k; i++){
	int  l = 0, r = n - 1;
	
	while(l < r){
		int m = (l + r) / 2;
		if(a[m] < b[i]){
			l = m + 1;
		}
		else {
			r = m;
		}
	}
	if(a[r] == b[i]){
		cout << ++r << " ";
		while(a[r] == b[i])
			r++;
		cout << r << endl;
	}
	else cout << 0 << endl;
	}


	return 0;
}