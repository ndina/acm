#include <bits/stdc++.h>

using namespace std;
int n;

vector<int> p;

int main(){
	int  k;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
		p.push_back(a[i]);
	}


	for(int i = 0; i < n; i++){
		p[i] = 1;
	}
	




	for(int i = 0; i < n; i++){
		for(int j = i + 1; j <= n - 1; j++){
			if(a[i] == a[j]){
				p[j]++;
			}
		}
	}

	for(int i = 0; i < n; i++){
		cout << p[i] << " ";
	}
}