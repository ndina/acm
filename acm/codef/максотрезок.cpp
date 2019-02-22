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
	int n;
    cin >> n;
    int a[n];
    int maxi = -19;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxi = max(maxi, a[i]);
    }

    int cnt = 1;
    int ans = 1;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i-1] && a[i] == maxi){
            cnt++;
            ans = max(cnt, ans);
        }
        else{
            cnt = 1;
        }
    }

    cout << ans;

    return 0;
 

}