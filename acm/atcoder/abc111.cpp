#include <iostream>
#include <vector>

using namespace std;
vector<int> v;
int main(){
	int n, a;

	cin >> n;

	while(n !=  0){
		a = n % 10;
		v.push_back(a);
		n /= 10;
	}

	for(int i = v.size() - 1; i >= 0; i--){
		if(v[i] == 9){
			cout << 1;
		}
		else{
			cout << 9;
		}
	}

	return 0;
}