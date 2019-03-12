#include <bits/stdc++.h>

using namespace std;

#define se second
#define sz size()
#define mp make_pair
#define pb push_back
//#define int long
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
	int n, m;
	cin >> n >> m;

	int a[n], b[m];

	for(int i = 0; i < n; i++){
		cin >> a[i];
		s1.insert(a[i]);
	}
    

	for(int i = 0; i < m; i++){
		cin >> b[i];
		s2.insert(b[i]);
	}
	set <int> :: iterator it; 


	for(it = s1.begin(); it != s1.end(); it++){
		v1.pb(*it);
	}
	for(it = s2.begin(); it != s2.end(); it++){
		v2.pb(*it);
	}
    int cnt = 0;

	if(s1.size() != s2.size()){
		cout << 0;
		return 0;
	}
	else{
	   for(int i = 0; i < v1.size(); i++){
	   	if(v1[i] == v2[i]){
	   		cnt++;

	   	}
	   }
	}

	if(cnt == v1.size()){
		cout << 1;
		return 0;
	}
	cout <<0;

	return 0;


}