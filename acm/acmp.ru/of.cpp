#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	set<char>v;

	// for(int i = 0; i < s.size(); i++){
	// 	v.insert(s[i]);
	// }

	// set<char>::iterator it;

	// for(it = v.begin(); it != v.end(); it++){
	// 	cout << *it;
	// }

	for(int  i = 1; i <= s.size() - 1; i++){
		for(int j = s.size(); j >= i +1 ; j--){
			if(s[j] == s[i]){
				s.erase(j,1);
			}
		}
	}

	cout << s;

	return 0;
}