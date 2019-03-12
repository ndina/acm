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
const double PI = acos(-1.0);
const int inf = int(1e9) + 7;
using namespace std;

signed main(){
	faster;
	int x1, y1, x2, y2, ax, ay;
	cin >> x1 >> y1 >> x2 >> y2 >> ax  >> ay;
	int bx, by;
	if(x1 == x2){
		bx = 2 * x1 - ax;
		by = ay;
	}
	if(y1 == y2){
		by = 2 * y1 - ay;
		bx = ax;
	}

	cout << bx << " " << by;

	return 0;
}