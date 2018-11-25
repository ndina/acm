#include <bits/stdc++.h>

using namespace std;

bool f(string x){
	bool res = true;

	for(int i = 0; i < x.size()/2; ++i){
		if(x[i] != x[x.size() - i - 1]){
			res = false;
			break;
		}
	}

	return res;
}

int main(){

	set<string> s;
	set<string>::iterator it;

	string word;

	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> word;
		if(!f(word)){
			s.insert(word);
		}

	}

	if(s.size() == 0){
		cout << "Ooh!";
	}
	else{
		for(it = s.begin(); it != s.end(); ++it){
		cout << *it << endl;
	}

	}

	



	return 0;
}