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

using namespace std;

vector<int>v, vv;
set<int>s;


signed main(){
	faster;
	ll x;
    cin >> x;
    int N[11];
    int n = 0;
    while(x != 0){
        N[n] = abs(x % 10);
        n++;
        x/=10;
    }

    sort(N, N + n);
    
    int ten = 1;
    for(int i = 0; i < n - 1; i++){
        ten *= 10;
    }

    ll ten_copy = ten;
    ll xm = 0;

    for(int i = 0; i < n - 1; i++){
     xm += N[i] * ten;
     ten /= 10;
    }
    
    ll xM = 0;
    for(int i = n - 1; i >= 0; i--){
        xM += N[i] * ten_copy;
        ten_copy /= 10;
    }

    int k = xM - xm;
    int c = 0;

    ll k_copy = k;

    while(k_copy != 0){
        c++;
        k_copy/=10;
    }

    for(int i = 0; i < n - c; i++){
        cout << 0;
    }
    if(k!=0) cout << k;

    return 0;

 

}