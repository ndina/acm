#include <bits/stdc++.h>
using namespace std;
#define pb push_back
vector<int>v;

int main(){
	int t;
	cin >> t;
	int cnt = 1;
	while(t--){
		int n,m;
		cin >> n >> m;
		for(int i = 0; i < n; i ++){
			int x;
			cin >> x;
			v.pb(x);
		}
		for(int i = 0; i < m; i++){
			char c;
			int a;
			cin >> c;
			if(c == 'S'){
				cin >> a;
				for(int j = 0; j < n; j++){
					v[j] += a;
				}
			}
			else if(c == 'D'){
				cin >> a;
				for(int j = 0; j < n; j++){
					v[j] /= a;
				}
			}
			else if(c == 'M'){
				cin >> a;
				for(int j = 0; j < n; j++){
					v[j] *= a;
				}
			}
			else if(c == 'R'){
				reverse(v.begin(), v.end());
			}
			else if(c == 'P'){
				int b;
				cin >> a >> b;
				swap(v[a], v[b]);
			}
		}
		cout << "Case " <<cnt <<":" << endl;
		for(int i = 0; i < v.size(); i++){
			cout << v[i];
			if(i != n - 1 ){
				cout << " ";
			}
		} 
		cout << endl;
		cnt++;
		v.clear();
	}

	return 0;
}