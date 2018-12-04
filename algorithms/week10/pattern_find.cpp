#include <bits/stdc++.h>
#define ll long long

using namespace std;
string s, t;

const int p = 31;

int main(){

  int k;
  cin >> k;
  while(k--){
  
  cin >> t >> s;
  vector<ll> p_pow(max(s.size(), t.size()));
  p_pow[0] = 1;
  int cnt = 0;
  vector<int>v;

  for(int i = 1; i < p_pow.size(); i++){
    p_pow[i] = p_pow[i-1] * p;
  }

    vector<ll> h(t.size());

    for(int i = 0; i < t.size(); i++){
      h[i] = (t[i] - 'a' + 1) * p_pow[i];
      if(i > 0) h[i] += h[i-1];
    }

    ll h_s = 0;
    for(int i = 0; i < s.size(); ++i){
      h_s += (s[i] - 'a' +1 ) * p_pow[i];
    }

    for(int i = 0; i  + s.size() - 1 < t.size(); ++i){
      ll cur_h = h[i + s.size() - 1];
      if(i > 0) cur_h -= h[i-1];
      if(cur_h == h_s * p_pow[i]){
        cnt++;
         v.push_back(i + 1);
      }
    }

 if(cnt == 0){
  cout << "Not Found";
 }
 else{
  cout << cnt << endl;
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }
 }
 cout << endl;
}
}