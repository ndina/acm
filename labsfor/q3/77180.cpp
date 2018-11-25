#include <bits/stdc++.h>

using namespace std;

vector<int>s;

int main(){
	int n;
	while(true){
		cin >> n;
		if(n != 0){
			s.push_back(n);
		}
		else{
			break;
		}
	}
    sort(s.begin(), s.end());
	for(int i = 0; i < s.size(); i++){
		cout << s[i] << " ";

	}

	return 0;
}