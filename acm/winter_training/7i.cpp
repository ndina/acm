#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int main(){
  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
  	ll t;
  	cin >> t;
  	ll mini = 1000000;
  	for(int i = 0; i < t; i++){
  		ll x;
  		cin >> x;
  		mini = min(mini, x);
  	}
  	ll ans = mini * (t - 1);
  	cout << ans << endl;

  }

    return 0;
}