#include <iostream>

using namespace std;

void rec(int cur, int n){
	if(cur > n) return;
	cout << cur << " ";
	rec(cur + 1, n);
}

int main(){
	
	int n;
	cin >> n;
	rec(1, n);

	return 0;
}