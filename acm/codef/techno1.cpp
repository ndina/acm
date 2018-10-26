#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int a, b, c;

	cin >> a >> b >> c;

	if(a * b == c){
		cout << "Yes" << endl;
		cout << a << " " << b << " " << c;
		return 0;
	}
			if(c * b == a){
		cout << "Yes" << endl;
		cout << b << " " << c << " " << a;
		return 0;
	}

		if(a * c== b){
		cout << "Yes" << endl;
		cout << a << " " << c <<  " " << b;
		return 0;
	}

	else{
		cout << "No";
	}

	return 0;
}