#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

#define ll long long

using namespace std;

int main(){
	
	ll n, cnt;
	cin >> n;


	for(int i = 1; i <= n; i++){
		if(i % 4 == 0){
			cout << 'd';
		}
		if(i % 4 == 1){
			cout << 'a';
		}
		if(i % 4 == 2){
			cout << 'b';
		}
		if(i % 4 == 3){
			cout << 'c';
		}
	}


}