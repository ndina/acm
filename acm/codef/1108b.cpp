#include <bits/stdc++.h>

using namespace std;

vector<int>v,vv,vvv;
#define pb push_back
int is[5010];

int main(){

	int n;
	cin >> n;
	int a[n];
    int maxi = -19;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		vv.pb(a[i]);
		vvv.pb(a[i]);
		maxi = max(maxi, a[i]);
	}

	for(int i = 1; i <= maxi; i++){
		if(maxi % i == 0){
			v.pb(i);
		}
	}

	int sz = v.size();
    
	for(int i = 0; i < n; i++){
	   for(int j = 0; j < sz; j++){
	   	if(vv[i] != v[j]){
	   		vv.erase(vv.begin() + i);
	   		v.erase(v.begin() + j);
	   		n--;
	   		sz--;
	   		vvv.pb(vv[i]);
	   	}
	   }
	}
	for(int i = 0; i < vvv.size(); i++){
		cout << vvv[i] << " ";
	}
   



	
}