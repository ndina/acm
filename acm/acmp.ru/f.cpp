#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, m, sum = 0;

	cin >> n >> m;
    
    int i = 1, j = 1;
    
    if(i >= n && j >= m){
    	while(1){
    		sum+=(i + j)%10;
    	}
    	if(sum <= m){
    		cout << i << endl << j;
    	}
    }
    else{
    	i++;
    	j++;
    }
    
  }