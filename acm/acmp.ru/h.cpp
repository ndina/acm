#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

vector <int> v;

int main(){
	int n;
	int maxi = 0, mini = 1000;

	cin >> n;
	int a[n];

	for(int i = 0; i < n; i++){
		cin >> a[i];
		v.push_back(a[i]);
	}
	for(int i = 0; i < n; i++){
		while(v.size() != 1){
			if(a[i] > maxi){
			v.erase(a[i]);
		    }
		    if(a[i] < mini){
			//mini = a[i];
			v.erase(a[i]);
		    }
		}
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i];
	}
}