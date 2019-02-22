#include <bits/stdc++.h>

using namespace std;

int l1, r1, l2, r2;



vector<int> v1, v2;

pair<int, int> v;

#define pb push_back

// int solve(int l1, r1, l2, r2){
// 	for(int i = l1; i<= r1; i++){
// 			v1.pb(i);
// 	}
// 	for(int j = l2; j<= r2; j++){
// 			v2.pb(j);
// 	}

// }

int main(){

	int q;
	cin >> q;

	while(q--){
		cin >> l1 >> r1>> l2>>r2;
		for(int i = l1; i<= r1; i++){
			v1.pb(i);
		}
		for(int j = l2; j<= r2; j++){
			v2.pb(j);
		}

		int l = 0;

		for(int i = 0; i < v1.size(); i++){
		   for(int j = 0; j < v2.size(); j++){
		   	  if(v1[i] != v2[j]){
		   		cout << v1[i] << " "<< v2[j] << endl;	
		   		l = 1; 
		   		break;  		
		      }
		 
		    }
		   if(l == 1){
		   	break;
		   }
		   if(l == 1){
		   	break;
		   }
		}
		v1.clear();
		v2.clear();	

	}

}