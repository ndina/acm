#include <iostream>
#include <cmath>

using namespace std;

int f(double n){
	if(n == 1){
		return 1;
	}
	else if(n > 1 && n < 2){
		return 0;
	}
	else{
		return f(n/2);
	}

}

int main(){
	double n;
	cin >> n;
	if(f(n) == 1){
		cout <<"Yes";
	}
	else{
		cout <<"No";
	}

	return 0;
}