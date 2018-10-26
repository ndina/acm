#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s;
	string s1;

	cin >> s >> s1;
    int cnt = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == s1[i]){
			cnt++;
		}
	}

	if(cnt == s.size()){
	  cout <<"YES";
	}
	
	else{

		cout <<"NO";
	}

	return 0;
}