#include <iostream>
#include <cmath>

using namespace std;

int bin(int *a, int n, int x ){
	int m;
	int l = 0, r = n -1;
	while(l <= r){
		 m = (l + r) / 2;
		if(a[m] < x){
			l = m + 1;
		}
		else if(a[m] > x){
			r = m;
		}

        if(a[m] == x){
        	return a[m - 1];
        }
		return m + 1;
  
}

int main(){

 int n, m;
 cin >> n >> m;
 int a[n], b[m];

 for(int i = 0; i < n; i++){
 	cin >> a[i];
 }

 for(int i = 0; i < m; i++){
 	cin >> b[i];
 }
 for(int i = 0; i < m; i++){
 	cout << bin(a, n, b[i]) << endl;
 }
 return 0;
}