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


	// if(n <= 1){
	// 	cout <<"NO";
	// 	return 0;
	// }

	for(int i = 0; i < s.size() - 1; i++){
		if(s[i] != s[i+1]){
          cnt++;
		 t = s.substr(i, cnt + 1);

		 cout << "YES" << endl;
		 cout << t ;
		 return 0;
		}

	}

	cout <<"NO";

}