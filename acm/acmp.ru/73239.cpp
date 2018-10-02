#include <iostream>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	int a[n], index, mini = 1000;

	for(int i = 0; i < n; i++){
		cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
    	if(a[i] <= m){
    		index = i;
    	}
    }
	cout << index;

	return 0;
}