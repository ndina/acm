#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, mini = 10000, maxi = -12321, indmin, indmax;

	cin >> n;

	int a[n];

	for(int i = 0 ; i < n; i++){
		cin >> a[i];
		if(a[i] > maxi){
			maxi = a[i];
			indmax = i;
		}
		if(a[i] < mini){
			mini = a[i];
			indmin = i;
		}
	}

	for(int i = 0; i < n; i ++){
		if(i == indmax){
			cout << mini << " ";
		}
		else {
			cout << a[i] << " ";
		}
	}
	return 0;
}