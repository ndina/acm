#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define fi first
#define se second
#define sz size()
#define mp make_pair
//#define int long
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;


set<int>s;

bool prime(int x){
	int cnt = 0;
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			cnt++;
		}
		if(cnt != 0){
			break;
		}
	}
	if(cnt > 0){
		return false;
	}
	else{
		return true;
	}
}

vector<pair<int, int> > v, v1;
map<int, int> m;


signed main(){
	ll n;
	cin >> n;
	ll a[n];
	ll sum = 0;
	ll cnt = 3;
	for(ll i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] == 1){
			sum += cnt;
			cnt++;
		}
		if(a[i] == 0){
			//sum +=0;
			if(cnt - 3 < 3){
				cnt = 3;
			}
			else{
				cnt = cnt - 3;
			}
			//cnt = max(cnt - 3, 3);

		}

	}
   cout << sum;

 return 0;
}

