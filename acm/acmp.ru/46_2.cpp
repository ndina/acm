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
    string s = "2.7182818284590452353602875";
    
    if(n == 0){
    	cout << 3;
    	return 0;
    }
    cout << "2.";
    for(int i = 2; i <= n; i++){

    	cout << s[i];}

    	if(s[n+2] > '4'){
    		cout << char(s[n+1] + 1);
    	}
    	else{
    		cout << s[n+1];
    	}
    
 

 // if(s[n + 2] > 4){

 // 	cout << int(s[n+2]) + 1;
 // }
 // else{
 // 	cout << s[n+2];
 // }
}

