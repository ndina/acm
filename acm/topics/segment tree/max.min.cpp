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


//set<int>s;

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

const int N = (5e5) + 322;

pair<int, int> t[N];

int combine(pair<int, int> a, pair<int,int>b){
    if(a.first > b.first) return a;
    if(b.first > a.first) return b;
    return a.second + b.second;
}

void build (int *a, int v, int tl, int tr) {
    if (tl == tr)
        t[v] = 1;
    else {
        int tm = (tl + tr) / 2;
        build (a, v*2, tl, tm);
        build (a, v*2+1, tm+1, tr);
        t[v] = combine (t[v*2], t[v*2+1]);
    }
}

int get_max (int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr)
        return t[v];
    int tm = (tl + tr) / 2;
    return combine (
        get_max (v*2, tl, tm, l, min(r,tm)),
        get_max (v*2+1, tm+1, tr, max(l,tm+1), r)
    );
}

void update (int v, int tl, int tr, int pos, int new_val) {
    if (tl == tr)
        t[v] = 1;
    else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update (v*2, tl, tm, pos, new_val);
        else
            update (v*2+1, tm+1, tr, pos, new_val);
        t[v] = combine (t[v*2], t[v*2+1]);
    }
}



signed main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    build(a, 1, 0, n - 1);
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        char c;
        int l, r;
        cin >> c >> l >> r;
        if(c == 's'){
            cout << get_max(1, 0, n - 1, l - 1, r - 1) << endl;
        }
        if(c == 'u'){
            update(1, 0, n - 1, l - 1, r);
        }
    }
	return 0;
}

