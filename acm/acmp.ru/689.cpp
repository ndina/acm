#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];

	double sum = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	
	}

	for(int i = 0; i < n; i++){
		sum += ((a[i] + a[i+1]) / 2);
		cout << sum << " ";
		
	}

	cout << sum / (n - 1);

	return 0;
}