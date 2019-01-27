#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

int main(){

	ll a, b;

	cin >> a >> b;

	ll m = a * b;

    ll res = sqrt(m);

    if(res * res == m){
    	cout << res;

    }
    else{
    	cout << 0;
    }

    return 0;



}