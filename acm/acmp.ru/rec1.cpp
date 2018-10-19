#include <bits/stdc++.h>


using namespace std;

int rec1(int k){
	if(k == n);
	else cout << k + 1;
}
int rec2(int d){

	if(d == 1) 
		return rec1(1);
	else
		return rec2(d - 1);
}

// int rec(int n){
// 	if(n == 1){
// 		cout << 1;
// 	}
 
//  cout<< rec(n - 1) << " "<< n;
// }

int main(){

	int n;
	cin >> n;
	cout << rec2(n);

	return 0;
}