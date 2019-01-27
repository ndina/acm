#include <bits/stdc++.h>

using namespace std;



int f(int n){
	int a, b;
	if(n == 1 || n == 2){
		return 1;
	}
	return a * f(n - 1) + b * f(n - 2)%7;
}

int main(){
 int a, b, n;
 cin >> a >> b >> n;

 cout << f(n);
}