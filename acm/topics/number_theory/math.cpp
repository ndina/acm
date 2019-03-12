#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define fi first
#define se second
#define sz size()
#define mp make_pair
#define int long
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;

vector<int>v, vv;
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


signed main(){
	faster;
	int n;
	cin >> n;
	for(int i = 2; i <=n; i++){
		for(int j = i + 1; j <= n; j++){
			if(!prime(i) && !prime(j)){
				if(i + j == n){
					cout << i << " " << j;
					return 0;
				}
			}
		}
	}


	return 0;
}