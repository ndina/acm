#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
vector <int> v;
bool f(int n){
	for(int i = 2; i < sqrt(n); i++)
		if(n % i == 0)
			return false;
	
	else
		return true;
}
int main(){
 int n;
 cin >> n;
 
 for(int i = 2; i < 10000; i++){
 	if(f(i) ){
 		v.push_back(i);
 	}
 }

 for(int i = 0; i < n; i++){
    cout << v[i] << " ";
 }
}