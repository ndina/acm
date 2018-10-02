#include <iostream>
#include <set>

using namespace std;

int main(){
	set<int>s;

	int n;
	cin >> n;

	int a[n];

	for(int i = 0; i < n; i ++){
		cin >> a[i];
		s.insert(a[i]);
	}

	if(s.size() % 2 == 0){
		cout << 0;
	}
	else if(s.size() == 1){
		cout << n / 2;
	}
	else{
		cout << n/2 - s.size();
	}
}