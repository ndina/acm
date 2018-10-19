#include <bits/stdc++.h>

using namespace std;


int rec(int n){
	if(n  == 0){
		return;
	}
	else{
		return n % 10 + rec(n / 10);
	}
}

// степень двойки
// int rec(double n){
// 	if(n == 1) return 1;
// 	else if (n > 1 && n < 2) {
// 		return 0;
// 	}
// 	else{
// 		return rec(n / 2);
// 	}
// }



int main(){

	int n;
	cin >> n;

	cout << rec(n);


	return 0;
}