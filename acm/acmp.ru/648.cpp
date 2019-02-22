#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	int n, cnt1 = 0, cnt2 = 0;

	cin >> n;

	int a[n];



	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
    
    sort(a, a + n);

    for(int i = 0; i < n / 2; i++){
    	cnt1 += a[i];
    }
     for(int i = n/2; i < n; i++){
    	cnt2 += a[i];
    }
   // cout << cnt1 << " " << cnt2 << endl;
    cout << cnt2 - cnt1;
    
    return 0;

}