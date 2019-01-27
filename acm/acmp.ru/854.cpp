#include <iostream>
using namespace std;

int main(){

	int a, b;
	string s;

	cin >> a >> b >> s;

	if(s == "freeze"){
		cout << min(a, b);
	}
	else if(s == "heat"){
		cout << max(a, b);
	}
	else if(s == "auto"){
		cout << b;
	}
	else{
		cout << a;
	}
	
}