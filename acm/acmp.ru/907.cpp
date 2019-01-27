#include <iostream>
#include <cmath>
#include <math.h>


using namespace std;
const double PI  =3.141592653589793238463;

int main(){
	int w, h, r;

	cin >> w >> h >> r;

	if(2 * r <= w && 2 * r <= h){
				cout << "YES";

	}
	else{
		cout << "NO";
	}
}