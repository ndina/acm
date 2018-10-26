#include <bits/stdc++.h>

using namespace std;
#define ll long long
vector<int>v,vv;

int main(){
	ll n, cnt = 0;
	cin >> n;
	int ans;


	for(ll i = 0; i < 1010;i++){
		for(ll j = 0; j< 100; j++){
			if(i*i - j*j == n){
				cnt++;
				v.push_back(i);
				vv.push_back(j);
			}
		}
	}


   for(int k = 0; k < v.size(); k++){
   	if(v[k] == 0){
   		ans = cnt*2;
   	}
   	else{
   			ans = cnt*2+1;
   		}
   	
   }

    for(int k = 0; k < vv.size(); k++){
   	if(vv[k] == 0){
   		ans = cnt*2;
   	}
   	else{
   		ans = cnt*2 + 1;
   	}
   }
   

   cout << ans;

	return 0;


}