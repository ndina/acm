#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, m, a, b, cnt = 0;
	cin >> n >> m;


	for(int i = 1; i <= 1129; i++){
	  for(int j = i + 1; j < 1129; j++){
	  	//int sum = i + j;
	  	if(i >= n && j >=n){
	  		 int sum = i + j;
	  		while(sum >= 0)
	  		sum = (i+j) % 10;
	  	    cnt += sum;
	  	    i = a;
	  	    j = b;
	  	}
	  }
	}
	if(cnt <= m){
		cout << a << endl << b;
	}
	return 0;
}