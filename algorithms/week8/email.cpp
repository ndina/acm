#include <bits/stdc++.h>

using namespace std;

vector<string>v;
map<string,int>m;

int main(){

	int n, k;
	string s;
	cin >> n >> k;
	string word = "";
	int cnt = 1;

	for(int i = 0; i < k; i++){
		getline(cin,s);
		bool ok = false;
		for(int j = s.size() - 1; j >= 0; j--){
			if(s[j] == ' '){
				ok = true;
			}
			if(!ok){
				word+=s[j];
			}
			if(s[j] = ':'){
				cnt++;
			}
		}

		if(m[word] == 0){
			v.push_back(word);
			m[word] = cnt;
		}

		m[word] = max(m[word] , cnt);

	}

	int count = 0;

	for(int i = 0; i < v.size(); i++){
		count += m[v[i]];
		//cout << m[v[i]] << " ";
	}


	if(count > n){
		cout <<"NO";
	}
	else{
		cout <<"YES";
	}


}