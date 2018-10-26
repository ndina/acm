#include<bits/stdc++.h>
#define for(i,n) for(int i = 0; i < n; i++)
#define pb push_back
#define sz size()

using namespace std;
vector<int>l,r;

int main(){

	int n, x;
	cin >> n;
	int a[n], b[n];
	char c;

	for(i,n){
		cin >> c;
		if(c == 'L'){
			cin >> a[i];
			l.pb(a[i]);
		}
		if(c == 'R'){
			cin >> a[i];
			r.pb(a[i]);
		}
		if(c == '?'){
			cin >> x;
			for(i, l.sz){
				if(x == a[i]){
					if(l.sz - 1- i <= i + r.sz){
						cout<<(l.sz - 1 - i ) << endl;
					}
					else{
						cout << i + r.sz << endl;
					}
				}
			}
			for(i, r.sz){
				if(x == a[i]){
					if(r.sz - 1- i <= i + l.sz){
						cout<<(r.sz - 1 - i ) << endl;
					}
					else{
						cout << i + l.sz << endl;
					}
				}
			}
		}

	}
	// cout << endl;
	// for(i,l.sz){
	// 	cout << "l"<<a[i] << " ";
	// }
	// cout<< endl;
	// for(i, r.sz){
	// 	cout << "r" << a[i] << " ";
	// }



	return 0;
}