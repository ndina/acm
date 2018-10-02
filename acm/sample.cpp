#include <iostream>
using  namespace std;

int main () {
	int n, m;
	cin >> n >> m;
	int cnt[1001];
	for(int i = 1; i <= m; ++i) {
		int x, y; 
		cin >> x >> y;
		cnt[x]++;
		cnt[y]++;
	}
	for(int i = 1; i <= n; i++){
		cout << cnt[i] << " ";
	}
	return 0;
}