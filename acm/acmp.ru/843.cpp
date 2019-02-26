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
// //M + F - N + L,
//  M - (M + F - N + L),
//   F - (M + F - N + L), 0)
vector<pair<int, int> > v, v1;
map<int, int> m;


signed main(){
 int n;
 cin >> n;
 int x, y, z;
 cin >> x >> y >> z;


 int total = x + y - n + z;
 int math  = x- total;
 int phys  = y - total;

 cout << total << " " << math << " " << phys;

 // if(x + y == n && z == 0){
 //  cout << 0 << " " << x << " " << y;
 // }
 // else if(x + y > n && z == 0){
 //  cout << 
 // }
	return 0;
}

