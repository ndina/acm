#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

#define ll long long
#define pb push_back

vector<ll>v;

int main(){

	ll l, r, k;

	cin >> l >> r >> k;

	ll  res = 1;

	bool cnt = 1;

	while(true){

		if(res > r){
			break;
		}
		if(res >= l && res <= r){
			cout << res << " ";
			cnt = 0;
		}

		if(res <= r / k){
			res *= k;
		}

		else{
           break;	
      	}
	}


	// while(1){

	// 	res = pow(k,cnt);
	// 	if(res>=l && res <=r){
	// 		v.pb(res);
	// 		cout << res << endl;
	// 	cnt++;
	// 	}

	// 	if(res > r){
	// 		break;
	// 	}
		
	// }

	// if(v.size() == 0){
	// 	cout << -1;
	// 	return 0;
	// }

	// for(int i = 0; i < v.size(); i++){
	// 	cout << v[i] << " ";
	// }
	if(cnt){
		    cout << -1;

		}  


	return 0;

}