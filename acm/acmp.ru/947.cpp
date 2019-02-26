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


set<int>s;

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
// //M + F - N + L,
//  M - (M + F - N + L),
//   F - (M + F - N + L), 0)
vector<pair<int, int> > v, v1;
map<int, int> m;


signed main(){
    double n;
    cin >> n;
    double x = 2.0;
    double sum = 0;
    int cnt = 0;
    for(int i = 1; i < 10010101; i++){
    	sum += 1/x;
    	cnt++;
    	if(sum >= n){
    		break;
    	}
    	else{
    		x++;
    	}
    }

    cout << cnt << " card(s)";


	return 0;
}

