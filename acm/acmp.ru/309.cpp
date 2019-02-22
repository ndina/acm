#include <bits/stdc++.h>

using namespace std;

int rev(int n){
	int revers;
	while(n!=0){
		int r = n % 10;
		revers = revers*10 + r;
		n /= 10;
	}
	return revers;
}

int main(){

	int n;
	cin >>n;
	int cnt = 0;
	cout << n + rev(n) << endl;

	//cout << rev(n) << endl;

	for(int i = 1; i < 100000; i++){
		if((i + rev(i)) == n){
		//	cout << rev(i) << " ";
			cnt++;
		}
	}

	cout << cnt;

	return 0;

}