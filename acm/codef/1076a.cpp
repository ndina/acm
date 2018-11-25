#include <bits/stdc++.h>

using namespace std;



int main(){
	int ans;

	int n;
	cin >> n;
	int cnt = 0;

	while(n > 0){
		 for(int i = 2; i  <= n; i++){
		 	if(n % i == 0){
		 		ans = i;
		 		break;
		 	}
		 }
		 n -= ans;
		 cnt++;
	}

	cout << cnt;
	
}