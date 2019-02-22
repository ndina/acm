#include <bits/stdc++.h>

using namespace std;

#define ll long long


set<ll>s;

vector<int>v, vv;

#define pb push_back




bool f(ll n){
	int cnt = 0;

	while(n > 0){
		int m;
		m = n % 10;
		s.insert(m);
		cnt++;
		n/=10;
	}
	if(s.size() < cnt){
		return true;
	}

	return false;
}

int main(){
	
	ll m;
    cin >> m;

    

    ll a = 0;
    ll res;
    
    for(ll i = 1; i < 100001; i++){
    	if(!f(i)){
    		++a;
    	}
    	if(m == a){
    		res = i;
    		break;
    	}
    }


   cout << res << endl;
   
    

	return 0;



}