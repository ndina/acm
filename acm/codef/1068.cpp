#include <iostream>

using namespace std;

int main(){

	long long n, m, k, l;

	cin >> n >> m >> k >> l;

	if(n < m){
		cout << -1;
		return 0;
	}

	long long y;

	if((k + l) % m == 0){
		y = (k + l) / m;
	}
	else{
		y = (k + l) / m + 1;

	}
	if(y*m > n){
		cout << -1;
		return 0;
	}

	cout << y;

	return 0;
}