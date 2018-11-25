#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;

	cin >> n;

	int a[n];

	int maxi = -1000;

	int sum1 = 0, sum = 0;

	for(int i = 0; i < n; i++){
		cin >> a[i];
		sum1 += a[i];
		if(a[i] > maxi ){
			maxi = a[i];
		}
	}

	int k = maxi;
    int ans;

    while(true){
    	for(int i = 0; i < n; i++){
		sum += (k - a[i]);
	    }
	    if(sum > sum1){
	    	ans = k;
	    //S	cout <<  sum << endl;
	    	break;
	    }
	    else{
	    	sum = 0;
	    	k++;
	    }

    }


    cout << ans;
    return 0;



}