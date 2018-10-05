#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s, s1;

	cin >> s >> s1;

	int cnt1= 0, cnt2 = 0;

	for(int i = 0; i < s.size(); i++){
		cnt1 += s[i];
		cnt2 += s1[i];
	}

	if(cnt1 == cnt2){
		cout <<"YES";
	}
	else{
		cout <<"NO";
	}

	return 0;
}