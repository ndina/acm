#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int rec(int x, int y, int z, int w){
    
    int res;
    int cnt = 0;
    for(int i = 0; i < w / x + 1; i++){
    	res = w - x * i;
    	for(int j = 0; j < res / y + 1; j++){
    		//res = w - i * x - j * y;
    		if((res - y * j ) % z == 0){
    			cnt++;
    		}
    	}
    }
   
  return cnt;
}

int main(){

	int x, y, z, w;

	cin >> x >> y >> z >> w;

	cout << rec(x, y, z, w);

	return 0;


}