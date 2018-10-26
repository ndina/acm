#include <iostream>
#include <cmath>

using namespace std;

int rec(int n){
	if(n == 1) return 1;

	return rec(n - 1) * n;
}


int main(){

	int n;
	cin >> n;
	if(n == 0) return 0;
	if(n == 1) return 1;
	cout <<rec(n);

	return 0;
}