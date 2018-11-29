#include <iostream>
#include <map>

using namespace std;

char tolower(char x){
	if(x <= 'Z' && x >= 'A') return char(x + 32);
	return x;
}
int main(){

	map<char,int> m;
	string word;

	while(cin >> word){
		char c = tolower(word[0]);
		m[c]++;
	}

	for(int i = 0; i < 26; ++i){
		cout << m[char(i + 'a')] << endl;
	}


	return 0;
}