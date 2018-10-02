#include <iostream>
#include <cmath>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
	int n, k = 0;
	cin >> n;
	int a[n][n];

	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == 1){
				k++;
			}
		}
	}

	cout << k / 2;

	return 0;
}