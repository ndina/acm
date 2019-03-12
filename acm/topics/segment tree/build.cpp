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

vector<pair<int, int> > v, v1;
map<int, int> m;
const int N = (5e5) + 322;
int t[N];



void build(int *a, int v, int tl, int tr){
	if(tl == tr){
		t[v] = a[tl];
	}
	else{
		int tm = (tl + tr) / 2;
		build(a, v*2, tl, tm);
		build(a, v*2 + 1, tm + 1, tr);
		t[v] = t[v*2] + t[v*2 + 1];
	}
}

int sum(int v, int tl, int tr, int l, int r){
	if(l > r) return 0;
	if(l == tl && r == tr) return t[v];
	int tm = (tl + tr) / 2;
	return sum(v*2, tl, tm, l, min(r,tm)) + sum(v*2+1, tm + 1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int pos, int new_val){
	if(tl == tr) t[v] = new_val;
	else{
		int tm = (tl + tr) / 2;
		if(pos <= tm){
			update(v*2, tl, tm, pos, new_val);
		}
		else{
			update(v*2 + 1, tm + 1, tr, pos, new_val);
		}
		t[v] = t[v*2] + t[v*2 + 1];
	}
}


signed main(){
	faster;
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	build(a, 1, 0, n-1);
    cout << sum(1, 0, n - 1, 3, 5) << endl;
    update(1, 0, n - 1, 5, 1);
    cout << sum(1, 0, n - 1, 3, 5) << endl;

	


    
}

