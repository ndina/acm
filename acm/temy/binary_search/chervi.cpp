#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a;
	int p[500001];

	
	for(int i = 1; i <= n; i++){
		cin >> a;
		p[i] = a + p[i-1];
	}


	int m;
	cin >> m;
	for(int i = 0; i < m; i++){
		int q;
		cin >> q;
		q--;

		int l = 0, r = n;

		while(r > l + 1){
			int m = (l + r)/2;
		    if(q >= p[m]){
			   l = m;
		    }
		    else{
			  r = m;
		     }
		}
		cout << l+1<<endl;
	}
	return 0;
}