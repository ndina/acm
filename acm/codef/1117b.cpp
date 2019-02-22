#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define fi first
#define se second
#define sz size()
#define mp make_pair
#define rep(i, x, y) for(int i = x; i < y; i++)

#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;

int main(){
	faster;
	int n, m, k;
	cin >> n >> m >> k;

	int a[n];

	rep(i, 0, n) cin >> a[i];
	sort(a, a + n);
	rep(i, 0, n) cout <<a[i] << " ";

}