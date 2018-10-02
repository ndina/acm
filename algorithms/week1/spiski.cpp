#include <iostream>
#include <cmath>
#include <deque>

using namespace std;

int main(){
	deque<string> d1, d2, d3;

	int n;
	string s;
	int cnt = 6;
   
	while(cin >> n){
		if(n == 9){
			cin >> s;
			d1.push_back(s);
		}
		if(n == 10){
			cin >> s;
			d2.push_back(s);
		}
		if(n == 11){
			cin >> s;
			d3.push_back(s);
		}
	}


	for(int i = 0; i < d1.size(); i++){
		cout << 9 << " " << d1[i] << "\n";
	}
	for(int i = 0; i < d2.size(); i++){
		cout << 10 << " " << d2[i] << "\n";
	}
	for(int i = 0; i < d3.size(); i++){
		cout << 11 << " " << d3[i]<< "\n";
	}
	return 0;
}