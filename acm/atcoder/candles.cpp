#include <bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i = 0; i < n; i++)

int main(){
	int n, k;

	cin >> n >> k;
    
    int a[n];

	loop(i,n){
		cin >> a[i];
	}
 

    int mini = 1e9;

	loop(i, n - k + 1){
		int temp;
		temp = a[i + k - 1] - a[i] + min(abs(a[i]), abs(a[i+k-1]));
		mini = min(mini, temp);
	}

	cout << mini;
}