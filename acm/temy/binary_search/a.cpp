#include <bits/stdc++.h>

using namespace std;

int binpow(int a, int n){
	if(n == 0) return 1;
	if(n & 1){
		return binpow(a, n - 1) * a;
	}
	else{
		return binpow(a, n / 2) * binpow(a, n / 2);
	}
}


int binpow(int a, int n){
	int res = 1;
	while(n){
		if(n & 1){
			res *= a;
			--n;
		}
		else{
			a *= a;
			n >>= 1;
		}
	}
	return res;
}


int main(){

	cout << binpow(3, 4);


}