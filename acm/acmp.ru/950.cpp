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


    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            int res =  97 + cnt;
            char c = (char)(res);
            cout << c;
            cnt = 0;

        }
        else{
            cnt++;
        }

    }

	return 0;
}


