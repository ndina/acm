#include <iostream>
#include <cmath>


using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;

	int sz = s.size();
	int res = 1;
	for(int i = n; i >= 1; i=i-sz){
		res*=i;
	//	cout << res << endl;
	}

	cout << res;

	return 0;


}