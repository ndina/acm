#include <bits/stdc++.h>
 
using namespace std;
 
int rev(int n){
    int revers;
    while(n!=0){
        int r = n % 10;
        revers = revers*10 + r;
        n /= 10;
    }
    return revers;
}
 
int main(){
 
    // int m;
    // cin >>m;
    // int cnt = 0;
    // for(int i = 1; i < 1000010; i++){
    //     if((i + rev(i)) == m){
    //     	cout << "A";
    //         cnt++;
    //     }     
    // }
    // cout << cnt;
    // return 0; 
    int k;
    cin >> k;
    int m;
    int cnt = 0;
    for(int i =1; i <= k; i++){
    	int j = i;
    	while(j > 0){
    		m = m * 10 + j %10;
    		j /= 10;
    	}
    	if( i + m == k){
    		cnt++;
    	}
    }


    cout << cnt;

    return 0;
}