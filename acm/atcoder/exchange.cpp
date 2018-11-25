#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b, k;
	cin >> a >> b >> k;

	for(int i = 0; i < k; i++){
		if(i == 0 || i % 2 == 0){
			if(a % 2 != 0)
			a--;
			a = a / 2;
			b += a;
		}
		
        if(i % 2 != 0){

		   if(b % 2 != 0)
			b--;
			b = b / 2;
			a += b;
        }
	
	}


	cout << a << " " << b;
	return 0;
}