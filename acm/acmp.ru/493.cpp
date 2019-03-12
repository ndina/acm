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
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == '.' && a[i + 1][j] == '.' && a[i][j + 1] == '.' && a[i - 1][j] == '.' && a[i][j-1] == '.'){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}