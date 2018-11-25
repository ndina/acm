#include <bits/stdc++.h>

using namespace std;


void rec(int n){
	if(n < 10){
		cout <<  n;
	}
	else{
		 rec(n / 10);
		 cout << " "<< n % 10;
	}

}

int main(){
	int n;
	 cin >> n;
	 rec(n);

	return 0;


}