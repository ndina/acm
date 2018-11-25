#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define pb push_back
int n, m;

vector<int> g[100];
vector<int>res;
bool used[100];

void dfs(int v){
	used[v] = true;
	for(int i = 0; i < g[v].size(); i++)
		if(used[g[v][i]] == false)
			dfs(g[v][i]);
	
    res.pb(v + 1);
}

void topsort(int n){
	for(int i = 0; i < n; i++)
		used[i] = false;
	//res.clear();

	for(int i = 0; i < n; i++)
		if(!used[i])
			dfs(i);
	reverse(res.begin(), res.end());
	
}

int top[1000];

int main(){

	cin >> n >> m;
    int x, y;

	for(int i = 0; i < m; i++){
		cin >> x >> y;
        x--;
        y--;
        g[x].pb(y);
	}
		topsort(n);

	for(int i = 0; i < res.size(); i++){
		cout << res[i] << " ";
	}
	cin >> x >> y;
	if(x == 0 && y == 0) {
		return 0;
	}




	return 0;
}