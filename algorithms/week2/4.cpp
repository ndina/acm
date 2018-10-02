#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

set<int>s;

int main(){
	int n, x;
	cin >> n;
	for(int i = 0; i < n; i++){
       cin >> x;
       s.insert(x);
	}

//	sort(s, s + n);

	set<int>:: iterator it;

	for(it= s.end() ; it != s.begin(); it++){
		cout << *it;
		return 0;
	}


}