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
    int k, w;
    scanf("%d %d",&k,&w);
    int flag = 0;
    int a1, b1, a2, b2, a3, b3;


scanf("%d %d %d %d %d %d",&a1,&b1,&a2,&b2,&a3,&b3);

if ((b1 >= k) && (a1 <= w)) flag = 1;

if ((b2 >= k) && (a2 <= w)) flag = 1;

if ((b3 >= k) && (a3 <= w)) flag = 1;

if ((b1 + b2 >= k) && (a1 + a2 <= w)) flag = 1;

if ((b1 + b3 >= k) && (a1 + a3 <= w)) flag = 1;

if ((b2 + b3 >= k) && (a2 + a3 <= w)) flag = 1;

if ((b1 + b2 + b3 >= k) && (a1 + a2 + a3 <= w)) flag = 1;

if (flag) printf("YES\n"); else printf("NO\n");
   // int k, w;
   // cin >> w >> k;
   // int a1, b1, a2, b2, a3, b3;
   // cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

   // if(a1 <= w && b1 >= k){
   //  cout << "YES";
   //  return 0;
   // }

   // if(a2 <= w && b2 >= k){
   //  cout << "YES";
   //  return 0;
   // }

   // if(a3 <= w && b3 >= k){
   //  cout << "YES";
   //  return 0;
   // }
   // if((a1 + a2 + a3) <= w && (b1 + b2 + b3) >= k ){
   //  cout << "YES";
   //  return 0;
   // }
   // if(a1 + a2 <= w){
   //  if(b1 + b2 >= k){
   //      //cout << 1;
   //      cout << "YES";
   //      return 0;
   //  }
   // }
   // if(a1 + a3 <= w){
   //  if(b1 + b3 >= k){
   //      cout << "YES";
   //     // cout << 2;
   //      return 0;
   //   }
   //  }
   //  if(a2 + a3 <= w){
   //    if(b2 + b3 >= k){
   //      //cout << 3;

   //      cout << "YES";
   //      return 0;
   //    }
   //  }

   //  cout << "NO";
	return 0;
}

