#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int b_s(int *a, int n,int x){
	int l = 0, r = n - 1;
	while(true){
		if(l==r) break;
		int mid = (l + r) / 2;
		if(a[mid] < x){
			l = mid + 1;
		}
		else{
			r = mid;
		}
	}
	if(l==0) return a[l];
	else if(x - a[l - 1] <= a[l] - x)
			return a[l-1];
	return a[l];
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
		cout << b_s(a, n, b[i] ) << endl;
	}
	 

	return 0;	
}