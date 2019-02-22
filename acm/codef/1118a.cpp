#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define fi first
#define se second
#define sz size()
#define mp make_pair

#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;

int main(){
	faster;
	ll test;
	cin >> test;
	ll x, y, z;

	ll res = 0;
	for(int i = 0; i < test; i++){
		cin >> x >> y >> z;
		ll mini = y * x; 

		if(x & 1){
			res += z * ((x - 1) / 2);
			res += y;
		}
		else{
			res += z * x/2;
		}

		res = min(res, mini);
		cout << res << endl;
		res = 0;
	}

	

	return 0;

}