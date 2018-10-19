#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, m;

	cin >> n >> m;

	int cnt[10100];
    
    set<int>s;

	for(int i = 1; i <= m; i++){
		int x, y;
		cin >> x >> y;
		s.insert(x);
		s.insert(y);

		cnt[x]++;
		cnt[y]++;
	}
	int res = 0;

	//cout << s.size() << endl;

	for(int i = 1; i <= 100; i++){
		if(s.size() == n){
			//cout << i << " "<< cnt[i] << endl;
			if(cnt[i] == 1){
				res++;
			}
	    }
	}

	cout << res;



	return 0;
}