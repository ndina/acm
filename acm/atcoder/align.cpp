#include <bits/stdc++.h>
#define ll long long


using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

    ll sum = 0;

    for(int i = 1; i < n; i++){
    	sum+=abs(a[i] - a[i-1]);
    	cout << abs(a[i] - a[i+1]) << " =sum" << " ";
    	cout << endl;
    }

   cout << sum;

    return 0;
}