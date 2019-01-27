#include <iostream>
#include<cmath>

using namespace std;

#define ll long long

int main(){
	ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll sum;

    if(d > a){
    	sum = a * b + (d - a) * c;
    }
    else{
    	sum = d * b;
    }

    cout << sum;
}