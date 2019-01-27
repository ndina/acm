#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
#define ll long long
int main(){
  
    ll n, cnt = 0;

    cin >> n;

    ll b = n;

    while(n != 0){
    	if(n % 2 != 0){
    		cnt++;
    	}
    	n = n / 2;
    }
    
    cout << b + cnt;

    return 0;

}