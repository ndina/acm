#include<bits/stdc++.h>

using namespace std;

int ans,n;
bool used[200100];
vector<int> g[2005];

int main(){

	cin >> n >> m;
	for(int i = 1;i <= m;i ++) {
		int x,y;
		cin >> x >> y;
		cnt[x] ++;cnt[y] ++;
	}
	for(int i = 1;i <= n;i ++) cout << cnt[i] << " ";
	return 0;
}