#include <iostream>
#include <set>

using namespace std;


set<int>s;

int main(){

	int n;

	while(1){
		cin >> n;
		if(n == 0){
			break;
		}
		else{
			s.insert(n);
		}
	}

	cout <<s.size();

	return 0;
}