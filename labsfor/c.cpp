#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	string s1, s2;

	bool ok;
	int cnt = 0;

	cin >> s1 >> s2;

	for(int i = 0; i < s1.size(); i++){
		if(s1.substr(i, s2.size()) == s2){
			cout <<"YES";
			return 0;
		}
		else{
			cnt++;
		}
	}

if(cnt> 0)
{
	cout <<"NO";
}	return 0;
}