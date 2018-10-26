#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s;
	int n, m;

	cin >> s >> n >> m;

	for(int i = 0; i < s.size(); i++){
		if(n == i){
			//cout << s[n];
	
		cout << s.substr(n, m  - n + 1);
		  return 0;

		}

	}


	return 0;
}