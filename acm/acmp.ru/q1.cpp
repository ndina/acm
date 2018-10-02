#include <iostream>

using namespace std;

int main(){

	int n;

	cin >> n;

	if(n >= 1 && n < 10){
		cout << "You cannot play the game";
	}
	else{
		cout <<"Welcome to the game!";
	}

	return 0;
}