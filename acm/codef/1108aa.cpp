#include <bits/stdc++.h>

using namespace std;

int l1, r1, l2, r2;

int main(){

	int q;
	cin >> q;
	int l = 0;

	while(q--){
		cin >> l1 >> r1>> l2>>r2;
		for(int i = l1; i<= r1; i++){
			for(int j = l2; j<= r2; j++){
			  if(i != j){
			  	cout << i << " " << j << endl;
			  	l = 1;
			  	break;
			  }
		    }
		    if(l == 1){
		    	break;
		    }		
		}		
	}
}