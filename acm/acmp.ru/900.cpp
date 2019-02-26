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


signed main(){
    int n;
    cin >> n;
    int x = n / 3;
    int y = n / 3;
    int z = n / 3;

    int p = x/4 + y/2 + (x/4 + y + z/2)/2;
    int v = y / 2;
    int k = (x/4 + y + z/2)/2;

    cout << p << " " << v << " " << k;
	return 0;
}

