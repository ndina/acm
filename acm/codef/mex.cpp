#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }
    int next = 0;

    for(int i = 0; i < n; i++){
    	if(a[i] > next){
    		cout << i + 1;
    		return 0;
    	}
    	next = max(next, a[i] + 1);
    }

    cout << "-1";

	return 0;
}