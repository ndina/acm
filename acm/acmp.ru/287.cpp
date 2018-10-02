#include <iostream>
#include <set>
#include <algorithm>


using namespace std;
set<string> seet;
int main(){
	int n, m;

	cin >> n >> m;

	string s, ss = "";
	cin >> s;

	for(int i = 0; i + m <= s.size(); i ++){
       seet.insert(s.substr(i, m));
	}
//	ss = "";
    set<string>:: iterator it;

   /* for(it = seet.begin(); it != seet.end(); it++){
    	cout << *it << " " ;
    }
    cout << endl;
    */
	cout << seet.size();
}