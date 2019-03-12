#include <bits/stdc++.h>

using namespace std;
#define se second
#define sz size()
#define mp make_pair
#define pb push_back
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


set<int>s1, s2;
vector<int>v1, v2;


signed main(){
	freopen("INPUT.TXT", "r", stdin);
	freopen("OUTPUT.TXT", "w", stdout);
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	
	int b[n];
	for(int i = 1; i <= n; i++){
		cin >> b[i];
	}
	int cnt = 0;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j] == a[j][i] && a[i][j] == 1){
				if(b[i] != b[j]){
				//	cout << i << " " << j << endl;
					cnt++;
				}
			}
		}
	}



	cout << cnt /2;


	return 0;
}
