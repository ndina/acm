#include <iostream>
using namespace std;

int main(){
	int n, cnt1 = 0, cnt2 = 0;
	cin >> n;


	if(n % 2 == 0){
		for(int i = 2; i <= n; i+=2){
		cnt1++;
	     }
       // cout << cnt*cnt;

	}
    else{
    	for(int i = 1; i <= n; i+=2){
		cnt2++;
	     }
    	//cout << cnt*(cnt-1);
    }

    if(n % 2 == 0){
    	cout << cnt1 * cnt1;
    }
    else{
    	cout << cnt2 * (cnt2-1);
    }

	return 0;

}