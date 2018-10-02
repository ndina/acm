#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

vector <int> v;

int main(){
	int n, nums ;
	cin >> n;

	for(int i = 2; i < 1000; i++){
		if(nums % i != 0);
		v.push_back(i);
		nums++;
	}
	for(int i = 0; i < n; i++){
		cout << v[i] << " ";
	}
}