#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, mini = 10000, z;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int x;
	cin >> x;

	for(int i = 0; i < n; i++){
		if(abs(x - a[i]) < mini){
			mini = abs(x - a[i]);
			z = a[i];
		}
		
	}
	cout << z;
}