#include <bits/stdc++.h>

#define f first 
#define s second 
#define pb push_back               
#define mp make_pair 

using namespace std;                    

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

const int N = (int)1e6 + 123, inf = 1e9;
const ll INF = 1e18;

int n, a[N], b[N];
vector< int > ans;
int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		b[i] = a[i] - a[i - 1];
	}
	for(int l = 1; l <= n; l++){
		bool ok = 1;
		for(int i = 1; i + l <= n; i++)
			if(b[i] != b[i + l])
				ok = 0;
		if(ok)
			ans.pb(l);
	}
	cout << ans.size() << endl;
	for(auto it : ans)
		cout << it << " ";

	return 0;
}