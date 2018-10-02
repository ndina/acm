#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
 int n, k;
 cin >> n >> k;
 int a[n], b[k];
 for(int i = 0; i < n; i++) cin >> a[i];
 for(int i = 0; i < k; i++) cin >> b[i];

 int l, r;
bool ok = false;
for(int i = 0; i < k; i++){
	l = 0;
	r = n - 1;
	int m;
	while(l <= r){
		m = (l + r) / 2;
		if(a[m] < b[i]){
			l = m + 1;
		}
		else if(a[m] > b[i]){
			r = m  - 1;
		}
		else{
			ok = true;
			break;
		}
	}
	 if(ok){
	 	cout << b[i] << " ";
  	cout << "YES"<<endl;
  }
  else{
  	cout << b[i] << " ";
  	cout <<"NO" << endl;
  }
  }
 
  return 0;

}