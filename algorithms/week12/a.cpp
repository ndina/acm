#include <bits/stdc++.h>

using namespace std;

bool used[10101];
vector<int>res;
vector<int>g[10010];

void dfs(int v){
	used[v] = true;
	for(int i = 0; i < g[v].size(); i++){
		int to = g[v][i];
		if(used[to] == false){
			dfs(to);
		}
	}
	res.push_back(v + 1);
}

void TopSort(int n){
	for(int i = 0; i < n; i++){
		used[i] = false;
	}

	for(int i = 0; i < n; i++){
		if(used[i] == false){
			dfs(i);
		}
	}

	reverse(res.begin(), res.end());
}

int main(){
	int n, m;
	cin >> n >> m;
	int x, y;
	for(int i = 0; i < m; i++){
		cin >> x >> y;
		x--;
		y--;
		g[x].push_back(y);
	}
	TopSort(n);

	for(int i = 0; i < res.size(); i++){
		cout << res[i] << " ";
	}

	cin >> x >> y;
	if(x == 0 && y == 0){
		return 0;
	}

}