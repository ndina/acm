#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long

using namespace std;

int main(){
	ll n;
	cin >> n;
    ll cnt = 0;
	ll a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == 1){
			cnt++;
		}
	}
	sort(a, a+ n);

	if(cnt != n){
		cout << 1 << " ";
		for(int i = 0; i < n - 1; i ++){
		cout << a[i] << " ";
	    }
	}
	else{
		for(int i = 0; i < n - 1; i ++){
		cout << a[i] << " ";
	    }
	    cout << 2;
	}
	





	//cout << 1 << " ";

	// for(int i = 0; i < n - 1; i++){
		
 //     if(index == i){
 //     	cout << 1 << " ";
 //     }		
 //     else{
 //     	cout << a[i] << " ";
 //     }
	// }

	return 0;
}