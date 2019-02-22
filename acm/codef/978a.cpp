#include <bits/stdc++.h>

using namespace std;
vector<int>v;
#define pb push_back

int main(){
	int n;
	cin >> n;
	int a[n];
	int b[10000];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

    bool ok = true;
    int ind = 0;

	for(int i = 0; i < n; i ++){
		for(int j = i + 1; j < n; j++){
			ok = true;
			if(a[i] == a[j]){
				ok = false;
			}
			if(ok == true){
				ind ++;
				b[ind] = a[i];
			}
		}
	}

	cout << ind<< endl;

	for(int i = 0; i < ind; i++){
		cout << b[i] << " ";
	}

	return 0;




}