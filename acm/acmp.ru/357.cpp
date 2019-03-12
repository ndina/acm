
#include <bits/stdc++.h>

using namespace std;
#define se second
#define sz size()
#define mp make_pair
#define pb push_back
#define int long
#define ll long long
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
int fact(int n){
	int res = 1;
	for(int i = 1; i <= n; i++){
		res *=i;
	}
	return res;
}

set<int>s1, s2;
vector<int>v1, v2;


signed main(){
   string s;
   cin >> s;
   int sum1 = 0, sum2 = 0;
   for(int i = 0; i < s.size(); i++){
   	if(i & 1){
   		sum1+=int(s[i])-48;
   	}
   	else{
   		sum2+=int(s[i])-48;
   	}
   }
   if(abs(sum1 - sum2) % 11 ==0){
   	cout << "YES";
   }
   else{
   	cout << "NO";
   }
	return 0;
}
