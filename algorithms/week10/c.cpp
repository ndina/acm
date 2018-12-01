#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int p = 31;
map<int,int> m;

int main(){
  ll n;
  string s;
  vector<string>v;

  while(cin >> n){
  	if(n == '0') break;
  	for(ll l = 0; l < n; l++){
  		cin >> s;
  		v.pb(s);
  	}
  	string t;
  	cin >> t;
  	vector<int>p_pow(s.size());
  	p_pow[0] = 1;

  	for(int i = 1; i < p_pow.size(); i++){
       p_pow[i] = p_pow[i-1] * p;
    }
    
    vector<int> h(t.size());
    for(int i = 0; i < t.size(); i++){
  		h[i] = (t[i] - 'a' + 1) * p_pow[i];
  		if(i > 0) h[i] += h[i-1];
  	}

  	ll h_s[n];
  	 for(int i = 0; i < v[i].size(); i++){
  	 	for(int j = 0; j < v[i].size(); j++){
  	 		h_s[i] += (v[i][j] - 'a' + 1) * p_pow[i];
  	 	}
  	 }
  	 ll cur_h;

  	 for(int i = 0; i + v[i].size() - 1 < t.size(); i++){
  	 	 cur_h = h[i + v[i].size() - 1];
  	 	if(i > 0) cur_h -= h[i-1];
  	 	   m[cur_h]++;
  	 	
  	 }

  	 int maxi = max(m[cur_h], maxi);

  	 map<string, int>:: iterator it;

  	 for(it = m.begin(); it != m.end(); it++){
  	 	if((*it).second == maxi){
  	 		cout << (*it).first << endl;
  	 	}
  	 }
  	
  }

}