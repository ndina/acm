#include <iostream>
#include <cmath>

#include <math.h>

using namespace std;

bool bin_search(int *a, int n, int x ){

	int l = 0, r = n - 1;

	bool ok = false;

	while(l <= r){

		int m = (l + r) / 2;

		if(a[m] < x){
			l = m + 1;
		}

		else if (a[m] >  x){
			r = m;
		}
		
		else{
			ok = true;
			break;
		}
	}
	return ok;
   
	}


int main(){
	int n, k;
	cin >> n >> k;
	int a[n], b[k];
    
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
	for(int i = 0; i < k; i++){
		cin >> b[i];
	}

	for(int i = 0; i < k; i++){
		if(bin_search(a, n, b[i])){
			cout <<"YES"<< endl;
		}
		else{
			cout <<"NO" << endl;
		}
	}
	return 0;
}