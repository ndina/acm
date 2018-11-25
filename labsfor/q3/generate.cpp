#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("input.txt","w",stdout);
	for(int i = 1;i<=20;i++){
		cout<<"+++++test"<<i<<"++++++"<<endl;
		int n = rand()%100 + 1;
		cout<<n<<endl;
		for(int j = 0;j<n;j++){
			int k  = rand()%5000;
			cout<<k<<" ";
		}
		cout<<endl;
		int m = rand()%n+1;
		int l = rand()%m+1;
		int b = rand()%m+1;
		cout<<m<<endl;
		cout<<l<<endl;
		cout<<b<<endl;
	}







}