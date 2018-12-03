#include <iostream>

using namespace std;

int main(){
	int n;
    cin >> n; // 5
    int a[n];
    int cnt = 0;

    for(int i = 0; i < n; i++){ // 4 5 3 2 1
    	cin >> a[i];

    }
    int x;
    cin >> x; // 2 

    for(int i = 0; i < n; i++){
    	if(a[i] == x){
    		cnt++;
    	}

    }

cout << cnt;
}