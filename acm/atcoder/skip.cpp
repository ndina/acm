#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;

int main(){
    
    long long n, x, cnt = 0;

    cin >> n >> x;

    int a[n];

    long long d = 1000000000000000;

    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }

    for(int i = 0; i < n; i ++){
    	if(abs(x - a[i]) < d){
    		d = abs(x - a[i]);
    	}

    }
    if(abs(x - a[0]) % d == 0){
    		cnt++;
    }
    
    for(int i = 1; i < n; i++){
    	
    	if(abs(x - a[i]) % d == 0){
    		cnt++;
    	}
    }
    
    if(cnt == n){
    	cout <<d;
    	return 0;
    }
    else{
    	if(cnt == n){
    		cout <<d;
    	}
    	else{
          	d--;
    	if(abs(x - a[0]) % d == 0){
    		cnt++;
        }
    
        for(int i = 1; i < n; i++){
     	
    	if(abs(x - a[i]) % d == 0){
    		cnt++;
    	}
       }
    	}
 
    }


    cout <<cnt ;
   

	return 0;
}