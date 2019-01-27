#include <iostream>

using namespace std;
#define ll long long

int main(){
	ll a, b, c;
	cin >> a >> b >> c;

	if(a < 2 || b < 6 || c < 1){
		cout << 0;
		return 0;
	}
	else{
		a = a / 2;
		b = b/ 6;
		c = c/1;
	}

	ll res;
	res = min(min(a, b), c);

	cout << res;

}