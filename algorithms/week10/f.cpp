#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int p = 31;

int main(){
	int n;
	cin >> n;
	string s;

	for(int i = 0; i < n; i++){
		cin >> s;
		int sz = s.size();
		vector<ll> p_pow(sz);

		for(int i = 0; i < p_pow.size(); i++){
          p_pow[i] = p_pow[i-1] * p;
		}

		vector<ll> h(sz);

		for(int i = 0; i < sz; i++){
			h[i] = (s[i] - 'a' + 1) * p_pow[i];
			if(i > 0) h[i] += h[i-1];
		}
		int res = 0;
         
        for(int l = 1; l <= n; l++){
        	vector<ll> hs(sz);
        	for(int i = 0; i + l - 1 < sz; i++){
        		ll cur_h = h[i + s.size() - 1];
  		        if(i > 0) cur_h -= h[i-1]; 
  		        cur_h *= p_pow[sz - i - 1];
  		        hs[i] = cur_h;
        	}

        	sort(hs.begin(), hs.end());
        	hs.erase(unique(hs.begin(), hs.end()), hs.end());
        	res += (int) hs.size();
        }

        cout << res << endl;
	}
}