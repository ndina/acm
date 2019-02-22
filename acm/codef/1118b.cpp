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
	int cnt = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int sum1 = 0, sum2 = 0;
	int j = 0;
	int i = 0;

    // while(true){
	while(j < n){


    for( i = 0; i < n; i++){
    	if(i == j){
    		continue;
    	}
    	else{
    		vv.pb(a[i]);
    	}
    }

    for(int i = 0; i < vv.size(); i++){
    	if(i & 1){
    		sum1 += vv[i];
    	}
    	else{
    		sum2 += vv[i];
    	}
    }
   // cout << sum1 << " " << sum2 << endl;
    if(sum1 == sum2){
    	cnt++;
    }

    j++;
    vv.clear();
    sum1 = 0;
    sum2 = 0;

 
    }

    cout << cnt;
    return 0;

 

}