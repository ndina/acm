#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, t;
	cin >> s >> t;
	int cnt11 = 0, cnt12 = 0, cnt21 = 0, cnt22 = 0;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			cnt11++;
		}
		else{
			cnt12++;
		}
	}
	for(int i = 0; i < t.size(); i++){
		if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u'){
			cnt21++;
		}
		else{
			cnt22++;
		}
	}
	//cout << cnt11 << endl  << cnt12 << endl << cnt21 << endl << cnt22 << endl;

	if(cnt11 == cnt21 && cnt12 == cnt22){
		cout <<"Yes";
	}
	else{
		cout <<"No";
	}
	
	return 0;
}