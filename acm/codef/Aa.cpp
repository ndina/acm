#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	string s, ss;

	int cnt = 0;

	getline(cin,s);

	for(int i = 0; i < s.size(); i++){
        ss = s.substr(i, 11);
        if(ss == "A ya Denis!"){
        	cnt++;
        }
	}

	cout << cnt;
	return 0;
}