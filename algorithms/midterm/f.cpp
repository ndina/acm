#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int maxi = -2;



int main(){

	int n, cnt = 1, maxi = 0;
	cin >> n;
	int a[n];
	int b[100100];
	int cnt2 = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
			}
		}
	}

	for(int i = 0; i < n - 1; i++){
		if(a[i] != a[i + 1]){
			cnt2++; // cnt2 + 1
		}
	}
    
    
    for(int i = 0; i < n; i++){
    	if(a[i] == a[i+1]){
    		cnt++;
    	}
    	else{
    		maxi = max(cnt, maxi);
    		cnt = 1;
    	}

    }

    cout << maxi << " " << cnt2 + 1;
    return 0;

}