#include <iostream>
#include "testhelper.h"

using namespace std;

int a[100];
int t = 0;

bool empty(){
	return t == 0;
}

void push(int x){
	a[t] == x;
	t++;
	cout << ok << endl;
}

void pop(){
	int res = a[t-1];
	t--;
	cout << ok << endl;
}
int size(){
	return t;
}

void clear(){
	t = 0;
}
int main(){
	string s;
	int n;

	while(cin >> s){
		if(s == "push"){
			push(n);
		}
	}
}
