#include <iostream>
#include <cmath>
#include <fstream>
#include <stdio.h>
using namespace std;

int main(){
	int n, min = 2222, a , b;
	///skanf("%d," n);
	cin >> n;
    if(n == 2){
        printf("1 2");
     	return 0;
    }
    if(n == 3){
    	printf("1 3");
    	return 0;
    }
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <=n / i; j++){
			if( i == j && i * j <= n){
				if(abs(i - j) + (n - i*j) < min){
					min = abs(i - j) + (n - i*j);
					a = i;
					b = j;
                 // 	v.push_back(i, j);
				}
			}
			else if(i * j <= n){
				if(abs(i - j) + (n - i*j) < min){
					min = abs(i - j) + (n - i*j);
                    a = i;
					b = j;
                  	//v.push_back(i, j);
				}
			}
		}
	}
	printf("%d %d", a, b);

} 