#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
vector <int> v;
int main(){
	int n; 
	cin >> n;
	while(n >= 0){
	if(n % 2 == 0){
		v.push_back(0);
		n /= 2;
	}
	else{
		v.push_back(1);
		n /= 2;
	}
    }

	for(int i = 0;  i < v.size(); i++){
		cout << v[i];
	}

	return 0;

}