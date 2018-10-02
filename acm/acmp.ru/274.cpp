#include <iostream>
#include <cmath>
#include <set>
#include <vector>

using namespace std;

set<char> s;
set<char> ss;
vector<string> v;

int main(){
	int n;
	cin >> n;
    char a, b;
    string c;
    getline(cin, c);
    for(int i = 0; i <c.size(); i++){
    	while(c[i] != ' '){
    		s.insert(c[i]);
    	}
    }

    cout << s.size();

    return 0;
}