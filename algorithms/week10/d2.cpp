#include<iostream>
#include<vector>
using namespace std;

vector<long long> p_pow;
vector<long long> h;
int p = 31;


void f(string s, string t){
    bool res = false;

    p_pow.push_back(1);
    for(int i = 1; i < s.size(); ++i){
        p_pow.push_back(p * p_pow[i-1]);
    }

    h.push_back(p_pow[0] * (s[0]-'a'+1));

    for(int i = 1; i < s.size(); ++i){
        h.push_back(h[i-1] + p_pow[i] * (s[i]-'a'+1));
    }

    long long h_t = 0;
    for(int i = 0; i < t.size(); ++i){
        h_t += p_pow[i] * (t[i] - 'a' + 1);
    }

    for(int i = 0; i <= s.size() - t.size(); ++i){
        long long c = h[i + t.size() - 1];
        if(i > 0) c -= h[i-1];
       //cout <<  c << " ";
      cout << p_pow[i] * h_t << endl;
       if(c == p_pow[i] * h_t){
           res = c;
           
       }
    }

   // cout << res;
}


int main(){
  string s, t;
  cin >> s>> t;

  f(s, t);

  return 0;
}