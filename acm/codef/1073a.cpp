#include <bits/stdc++.h>

using  namespace std;

int main(){

	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0, cnt1 = 0;
	string t;
	int a[n];
	int num = 0;



	// for(int i = 0; i < s.size(); i++){

	// 	a[s[i]]++;
	// }

	// for(int i = 0; i < s.size(); i++){
	// 	if(a[s[i]] > s.size() / 2){
	// 		cout <<"NO";
	// 		return 0;
	// 	}
	// }

	if(s.size() == 3){
		for(int i = 0; i < s.size() - 1; i++)
		if(s[i] == s[i+1]){
			cout <<"NO";
			return 0;
		}
	}
	int k = 2;

	for(int i = 0; i < s.size(); i++){
		t = s.substr(i, k);

		for(int j = 0; j < t.size();j++){
			a[t[j]]++;
		}
		for(int j = 0; j < t.size(); j++){
			if(a[t[j]] > t.size() / 2){
			cout <<"NO";
			return 0;
		    }
		
		else {
			cout <<"YES" << endl;
			cout <<t;
			return 0;
		}
	}

		
		
	}


	// for(int i = 0; i < s.size() - 1; i++){
	// 	if(s[i] != s[i+1]){
 //          cnt++;
	// 	 t = s.substr(i, cnt + 1);

	// 	 cout << "YES" << endl;
	// 	 cout << t ;
	// 	 return 0;
	// 	}

	// }

}