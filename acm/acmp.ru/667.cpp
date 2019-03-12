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
    int n, m, k;
    cin >> n >> m >> k;
    int cnt = 0;
    while(n > 0){
    	if(m > 1 && n >= k){
    	  n -= k;
    	  m -= 2;
    	  n -=2;
    	  cnt++;
    	}

    	else break;

    }
    if(cnt > 0){
    	cout << cnt;
    }
    else{
    	cout << 0;
    }    
	return 0;
}

