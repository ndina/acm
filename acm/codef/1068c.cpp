#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int a[n];
	int ans;
	int cnt = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i];
    }

    for(int i = 0; i < n; i++){
    	if(a[i] == -1){
    		cnt++;
    	}
    	if(cnt == n){
    		ans = 200;
    		return 0;
    	}
    	if(a[0] == -1){
    		ans = 200 - n - 1;
    	}
    	else if(a[n - 1] == -1){
    		ans = 200 - n - 1;
    	}
    	else if(a[i] == -1 && a[i -1] != -1 && a[i+1] != -1){
    		ans = 1;
    	}
    }


    cout << ans;

    return 0;


		
}