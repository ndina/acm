#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(0); 
    cin.tie(0), cout.tie(0);
	int n;
	cin >> n;

     int x;

	int a[n];

	for(int i = 1; i <= n; i++){
		cin >> a[i];

	if(a[i] == 1){
		x = i;
	}
	}

	

	for(int i = x; i <= n; i++){
		cout <<a[i] <<" ";
	}
	for(int i = 1; i < x; i++){
		cout << a[i]  << " ";
	}

	return 0;

}