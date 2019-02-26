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
 int x, y;
 cin >> x >> y;
 bool ok = false;
 int cnt = 0;

 if(x == 1 && y == 1){
 	cout << 0;
 }
 else if(x == y){
 	cout << 2;
 }
 else{
 	cout << 1;
 }
 // if(x == 1){
 // 	for(int j = 2; j <= 8; j++){
 // 		if(y == j){
 // 			ok = true;
 // 			cnt = 1;
 // 		}
 // 	}
 // }
 // if(y == 1){
 // 	 	for(int j = 2; j <= 8; j++){
 // 		  if(x == j){
 // 			ok = true;
 // 			cnt = 1;
 // 		}
 // 	}
 // }

 // if(ok){
 // 	cout << 1;
 // }
 // else if(x == 1 && y == 1){
 // 	cout << 0;
 // }
 // else{
 // 	cout << 2;
 // }
	return 0;
}

