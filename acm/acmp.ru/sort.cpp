#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	sort(a, a + n);

	//if(n % 2 == 0){
	for(int i = 0; i < n; i++){
		//cout << a[n/2 - 1];
	cout << a[(n - 1) / 2];
	return 0;
	}
    }