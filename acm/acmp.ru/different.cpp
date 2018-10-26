#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

std::vector<int> v;

int main(){

	int a, c;

	cin >> a >> c;

	for(int i = 1; i<=a * c; i++){
		if(a * i % c == 0){
			v.push_back(i);
			v.push_back(c/i);
		}
	}

	for(int i = 0; i < v.size(); i++){
		if(a * v[i] % c == 0 && a != v[i] && v[i] != c){
			cout << v[i];
			return 0;
		}
	}
}