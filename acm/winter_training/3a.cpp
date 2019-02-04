#include <bits/stdc++.h>

using namespace std;

int main(){

	bool ab = false, bc = false, ac = false;
	string s[100];
	for(int i = 0; i < 3; i++){
		cin >> s[i];
		if (s[i][0] == 'A' && s[i][2] == 'B')
		{
			if (s[i][1] == '>'){
				ab = true;
			}
		}
		else if (s[i][0] == 'B' && s[i][2] == 'A')
		{
			if (s[i][1] == '<'){
				ab = true;
			} 
		}

	}
}