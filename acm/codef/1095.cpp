#include <bits/stdc++.h>

using namespace std;

vector<char>v;

int main(){

	// int n;
	// cin >> n;

	// string s;
	// cin >> s;

	// string t = ""; /// abbccc

	// int j = 0;

	// for (int i = 0; i < n; i += j)
	// {
	// 	t += s[i]; // ab

	// 	j++;
	// }

	// cout << t << endl;

	int n;
	cin >> n;

	string s;
	cin >> s;
	s += "#";
	int cnt = 1, t = 1; //ooopppssss

	for(int i = 0; i < s.size() - 1; i++){

		if(s[i] != s[i+1]){
			if(cnt > t){
				for(int j = 0; j < cnt - t; j++){
					v.push_back(s[i]);

				}
			}
			else if(cnt == t){

				v.push_back(s[i]);
				
			}
			cnt = 1;
			t++;
		}
		else{
			cnt++;
		}
	}

	for(int i = 0; i < v.size(); i++){
		cout << v[i];
	}


}