#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int>v, v1;

int main(){ 

	int n;

	int cnt = 0;

	while(cin >> n){
	   cnt++;  

		if(cnt % 2 == 0){
			v.push_back(n); 
		}
		else{
			v1.push_back(n); 
		}
	}

	int maxi = -1000000, maxi1 = 199900;

	for(int i = 0; i < v.size(); i++){
		//cout << v[i] << " ";
		maxi = max(maxi, v[i]);
	}

	for(int i = 0; i < v1.size(); i++){
		maxi1 = min(maxi, v1[i]);
		//cout << v1[i] << " ";
	}

	cout << maxi;

	cout << endl;

	cout << maxi1 << endl;

	cout << maxi + maxi1;
} 