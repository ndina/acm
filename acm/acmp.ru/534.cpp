#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;
    cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int m;
	cin >> m;
	int b[m];
	for(int i = 0; i < m; i++){
		cin >> b[i];
	}
	sort(b, b + m);
	for(int i = 0; i < m; i++){
		if(b[i] == b[i+1]){
			cnt++;
		}
	}



}