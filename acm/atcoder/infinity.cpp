#include <bits/stdc++.h>

using namespace std;
#define ll long long
vector<char>v;

int main(){
    
    ll  m;
    string res = "";

    string s;

    cin >> s >> m;

    for(int i = 0; i < s.size(); i++){
    	if(s[i] == 1){
    		v.push_back(1);
    	}
    	if(s[i] == 2){
           for(ll j = 0; j < 100000000*m; j++){
           	v.push_back(2);
           }
    	}
    	if(s[i] == 3){
           for(ll j = 0; j < 100000000*m; j++){
           	v.push_back(3);
           }
    	}
    	if(s[i] == 4){
           for(ll j = 0; j < 100000000*m; j++){
           	v.push_back(4);
           }
    	}
    	if(s[i] == 5){
           for(ll j = 0; j < 100000000*m; j++){
           	v.push_back(5);
           }
    	}
        if(s[i] == 6){
           for(ll j = 0; j < 100000000*m; j++){
           	v.push_back(6);
           }
    	}
    	if(s[i] == 7){
           for(ll j = 0; j < 100000000*m; j++){
           	v.push_back(7);
           }
    	}
    	if(s[i] == 8){
           for(ll j = 0; j < 100000000*m; j++){
           	v.push_back(8);
           }
    	}
    	if(s[i] == 9){
           for(ll j = 0; j < 100000000*m; j++){
           	v.push_back(9);
           }
    	}

    }

  /*  for(ll i = 0; i < m; i++){
    	cout << v[m]
    */

    cout <<v[m];

	return 0;
}