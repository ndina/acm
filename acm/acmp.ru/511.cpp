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
   int min1 = 0;
   int min2 = 5;
   for(int i = 1; i<=n; i++){
      if(i % 2 == 1){
         m[i] = min1;
         // v.push_back(make_pair(min1, i));
         min1 += 10;
      }
      else{
         m[i] = min2;
         // v1.push_back(make_pair(min2, i));
         min2 += 10;
      }

   }

   map<int, int>:: iterator it;

   for(it = m.begin(); it != m.end(); it++){
      //cout << (*it).first << " " << (*it).second << endl;
      if(n == (*it).first){
         if((*it).first > 145){
            cout << "NO";
            return 0;
         }
         if((*it).second >= 60){
            cout << (*it).second / 60 << " " << (*it).second % 60;
         }
         else{
            cout <<0 << " " << (*it).second;
         }
      }
   }

   //cout << "NO";




  //  if(n == v.second){
  //     cout << v.first;
  //  }
  // else if(n == v1.second){
  //     cout << v1.first;
  //  }

	return 0;
}

// #include <iostream>

// using namespace std;

// main()

// { int k;

// cin>>k;

// k=k*5-5;

// if (k>720) cout<<"NO";

// else cout<<k/60<<' '<<k%60;

// }