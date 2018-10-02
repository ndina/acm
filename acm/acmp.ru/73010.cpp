#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int rad, h;

	cin >> rad >> h;

	double v = (M_PI*rad*rad*h);

	cout << v;

	return 0;
}