#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int b[1010];
	int  i = 0;
	int cnt = 0;

	while(n > 0){
		//int t = n % 2;


		b[i++]  = (n%2);
		n/=2;
		
	}


	for(int j = i - 1; j >= 0; j--){
		cout << b[j];
	}
}