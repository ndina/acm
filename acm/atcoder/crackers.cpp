#include<bits/stdc++.h>

using namespace std;

int ans,n;
bool used[200100];
vector<int> g[2005];

void dfs(int v) {
	used[v] = 1;
	for(int i = 0;i < g[v].size();i ++) {
		int to = g[v][i];
		if(!used[to]) {
			++ ans;
			dfs(to);
		}
	}
}

int main(){

	cin >> n;
	for(int i = 1;i <= n;i ++) {
		for(int j = 1;j <= n;j ++) {
			int x;
			cin >> x;
			if(x) {
				g[i].push_back(j);
			//	g[j].push_back(i);
			}
		}
	}
	for(int i = 1;i <= n;i ++) {
		if(!used[i]) dfs(i);
	}
	cout << ans;
	return 0;
}