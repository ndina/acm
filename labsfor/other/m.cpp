#include <iostream>

using namespace std;

int main(){
	int n, m ,k;
	cin >> n >> m >> k;
	int cnt = 0, sum = 0;

	while(true){
		cnt += m;
		sum++;
		if(cnt >= n){
			cout << sum;
			return 0;
		}
		else{
			cnt-=k;
		}
	}
}