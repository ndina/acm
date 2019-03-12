#include <bits/stdc++.h>

using namespace std;

// int binpow(int a, int n){
// 	if(n == 0) return 1;
// 	if(n & 1){
// 		return binpow(a, n - 1) * a;
// 	}
// 	else{
// 		return binpow(a, n / 2) * binpow(a, n / 2);
// 	}
// }
#define se second
#define sz size()
#define mp make_pair
#define int long
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const double PI = acos(-1.0);
const int inf = int(1e9) + 7;

int binpow(int a, int n){
	int res = 1;
	while(n){
		if(n & 1){
			res *= a;
			--n;
		}
		else{
			a *= a;
			n >>= 1;
		}
	}
	return res;
}


signed main(){
	int n, m;
	cin >> n >> m;

	int res  = binpow(n, m);
	cout << res % 10;

	return 0;


}