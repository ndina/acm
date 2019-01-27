#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int maxi;

	if(a > 727 || a < 94){
		cout << "Error";
		return 0;
	}
	if(b > 727 || b < 94){
		cout << "Error";
		return 0;
	}
	if(c > 727 || c < 94){
		cout << "Error";
		return 0;
	}
	else{
		maxi = max(max(a,b),c);
	}

	cout << maxi;

}