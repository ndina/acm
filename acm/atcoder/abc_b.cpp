#include <iostream>
#include <set>
using namespace std;

set<int>s;
//vector<int>v;

int main(){
   int b;
   int a;

   cin >> b;
   int n = b;
	while(b !=  0){
		a = b % 10;
	//	v.push_back(a);
		s.insert(a);
		b /= 10;
	}
  //  cout << s.size() << endl;
	if(s.size() == 1){
		cout << n;
	}
	else if(n < 111){
		cout << 111;
	}
	else if(n < 222 && n > 111 ){
		cout << 222;
	}
	else if(n < 333 && n > 222 ){
		cout << 333;
	}
	else if(n < 444 && n > 333 ){
		cout << 444;
	}
	else if(n < 555 && n > 444 ){
		cout << 555;
	}
	else if(n < 666 && n > 555 ){
		cout << 666;
	}
	else if(n < 777 && n > 666 ){
		cout << 777;
	}
	else if(n < 888 && n > 777 ){
		cout << 888;
	}
	else if(n < 999 && n > 888 ){
		cout << 999;
	}



	return 0;
}