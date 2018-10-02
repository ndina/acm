#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int n, sum = 0;
	string k;
//	char ch[k];
	cin >> n >> k;
	int age = n % 10;
	int newage = age + 2;

	if(newage == 10){
		cout << k;
	}
	else if(newage == 2){
        for(int i = k - 1; i >= 0; i--){
           //if(ch[i] == '1'){
           	sum += pow(2, i);
           //}
        }
        cout << sum;
	}
	else if(newage == 8){
		for(int i = k - 1; i >= 0; i--){
           	sum += pow(8, i);   
        }
        cout << sum;
	}
}