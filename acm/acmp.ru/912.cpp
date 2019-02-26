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

vector<pair<int, int> > v, v1;
map<int, int> m;


signed main(){
 int n;
 cin >> n;
 int cnt = 0;
 int a[n];

 for(int i = 0; i < n; i++){
  int x;

  cin >> x;
  m[x]++;

 }


 int maxi = -1;

 map<int, int>:: iterator it;

 for(it = m.begin(); it != m.end(); it++){
  maxi = max(maxi, (*it).second);
 }

  for(it = m.begin(); it != m.end(); it++){
     if((*it).second == maxi){
      cnt++;
     }
 }

  for(it = m.begin(); it != m.end(); it++){
    if(cnt > 1){
      cout << 0;
      return 0;
    }
    else{
      if((*it).second == maxi){
        cout << (*it).first;
      }
    }
 }



	return 0;
}

