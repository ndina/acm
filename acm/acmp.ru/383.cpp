#include <iostream>
#include <Cmath>

using namespace std;

int sum(int n){
	int sum = 0;
  while(n > 0){
  	sum+=n % 10;
  	n/=10;
  }
  return sum;
}
int cnt(int n){
	int b = 0;
	int cnt = 0;
	while(n > 0){
		b += n % 10;
		cnt++;
		b /= 10;
	}
	return cnt;
}

int main(){
	int n, temp = 0, res = 1;
	cin >> n;
	
	while(temp <= n){
		if(sum(res) % cnt(res) == 0){
			cout << sum(res) << " " << cnt(res) << endl;
			temp++;
		}
		res++;
	}

	cout << res;	
    
}