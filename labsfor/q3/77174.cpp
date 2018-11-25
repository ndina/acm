#include <iostream>
#include <map>
#include <sstream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

int main(){

	string word;
	map<string,int> m;

	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> word;

		m[word]++;
	}
	

	map<string,int>::iterator it;
	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}

	


	return 0;
}