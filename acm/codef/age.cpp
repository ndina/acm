#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;
    cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = i + 1; j <= n; j++){
			if(i * j == n){
				cout << i << " " << j;
				return 0;
			}
		}
	}
	cout << -1;
}