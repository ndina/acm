#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
 int n, k;
 cin >> n >> k;
 int a[n], b[k];
 for(int i = 0; i < n; i++) cin >> a[i];

 int sum = 0;
 int l, r;
 bool ok = false;
for(int i = 0; i < n; i++){
	l = 0;
	r = n - 1;
	int m;
	while(l <= r){
		m = (l + r) / 2;
		while(a[i] <= a[m]){
			sum += a[i];

		}
		if(sum < k){
			l = 0;
			r = m + 1;
		}
		// if(a[m] < k ){
		// 	l = m + 1;
		// }
		// else if(a[m] > b[i]){
		// 	r = m  - 1;
		// }
		// else{
		// 	ok = true;
		// 	break;
		// }

    }
}
    

   cout << r - l;
  return 0;
}

