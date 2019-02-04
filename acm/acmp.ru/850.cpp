#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int a, b, minA, maxA, MaxB, minB;

	cin >> a >> b;	

	maxA = a;
	if(a % 2 == 0){
		minA = a/2;
	}
	else{
		minA = (a+1)/2;
	}

	MaxB = b;

	if(b% 2 == 0){
		minB = b / 2;
	}
	else{
		minB = (b + 1) / 2;
	}

	cout << max(minA, minB) << " " << min(maxA, MaxB);

	return 0; 

}