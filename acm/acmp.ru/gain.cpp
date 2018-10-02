#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
vector <int> v;
int main(){
	int n;
	cin >> n;
	int cnt = 0, l = 0;

	for(int i = 2; i < 10000; i++)
		for(int j = 1; j <= sqrt(i); j++)
			if(i % j == 0){
				cnt++;
			
		if(cnt == 1){
			l++;
			v.push_back(i);
		}
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
}