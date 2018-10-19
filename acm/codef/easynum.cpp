#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n,cnt = 0;

	while(true){
		cin >> n;
		if(n > 0 ){
			cnt++;
		}
		if(n < 0){
			break;
		}
	}

	cout << cnt;

	return 0;
}