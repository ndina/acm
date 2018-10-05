#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	int maxi = 0;
	char res;

	for(int i = 0; i < s.size(); i++){
		if(int(s[i]) > maxi){
			maxi = int(s[i]);
			res = s[i];
		}
	}

	cout << res;

	return 0;
}