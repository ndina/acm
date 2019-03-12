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
const double PI = acos(-1.0);
const int inf = int(1e9) + 7;
using namespace std;

vector<pair<int,int> > v;

signed main(){
    faster;
    int n;
    cin >> n;
    int sum = 0;

    for(int i = 1; i < 10101; i++){
        sum += i;
        v.pb(make_pair(i, sum));
    }

    for(int i = 1; i < v.size(); i++){
        if(n >= v[i-1].second && n < v[i].second){
            cout << v[i-1].first;
            return 0;
        }
    }

    return 0;
}