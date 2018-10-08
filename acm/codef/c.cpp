#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n, m;

	cin >> n >> m;

	int a[m];

	for(int i = 0; i < m; i++){
		cin >> a[i];
	}

	int b[n];
    
    for(int i = 0; i < n; i++){
    	cin >> b[i];
    	for(int j = m - 1;j >= 0; j--){
    		if(a[j] == b[i]){
    			cout <<"pos " << i + 1 << endl;
    			
    		}
    	}
    }
}