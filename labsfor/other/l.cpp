#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	string s;

	cin >> s;

	int cnt = 0;

	for(int i = 0; i < s.size(); i++){
		 if(s[i] == s[i+1]){
		 	cnt++;2q
		 }
		if(int(s[i]) + 1 == int(s[i+1]) ){
			cnt++;
		}
	}


	if(cnt == s.size() - 1){
		cout <<"YES";
	}
	else{
		cout <<"NO";
	}

	return 0;
}