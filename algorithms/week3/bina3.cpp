#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	bool ok = false;

	int n, k;
	cin >> n >> k;

	int a[n], b[k];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < k; i++){
		cin >> b[i];
	}

   int l = 0, r = n - 1;
   for(int i = 0; i < k; i++){
   	while(true){
   		int m;
   	if(l == r && a[m] == b[i]){ok = true; break;}
   	 m = (l + r) / 2;
   	if(a[m] < b[i]){
   		l = m + 1;
   	}
   	else{
   		r = m;
   	}
   }

   
   if(ok){
   	cout <<"YES" << endl;
   }
   else{
   	cout <<"NO" << endl;
   }
   }
  

    

    return 0;
	
}