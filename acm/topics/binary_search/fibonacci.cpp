#include <bits/stdc++.h>

using namespace std;

void power(int F[2][2], int n);
void multiply(int F[2][2], int M[2][2]);

int fib(int n){
	int F[2][2] = {{1,1}, {1,0}};
	if(n == 0){
		return 0;
	}
	power(F, n - 1);
	return F[0][0];
}

void multiply(int F[2][2], int M[2][2]){
	int x = F[0][0]*M[0][0] + F[0][1]*M[1][0];
	int y = F[0][0]*M[0][1] + F[0][1]*M[1][1];
	int z = F[1][0]*M[0][0] + F[1][1]*M[1][0];
	int w = F[1][0]*M[0][1] + F[1][1]*M[1][1];

	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}

void power(int F[2][2], int n){
	if(n == 0 || n == 1) return;

	int M[2][2] = {{1,1}, {1,0}};

	power(F, n / 2);

	multiply(F,F);

	if(n & 1){
		multiply(F,M);
	}
}



int main(){

	int n;
	cin >> n;
	cout << fib(n);
	return 0;

}