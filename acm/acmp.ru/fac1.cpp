#include <iostream>
#include <cmath>

using namespace std;

int fac(int n){
	if(n == 1){
		return 1;
	}
	return fac(n - 1) * n;
}

int main(){


 int n;
  cin >> n;
  cout <<fac(5);
  return 0;
}
