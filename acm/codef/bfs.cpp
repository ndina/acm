#include <iostream>
#include <algorithm>
#include <queue>
#include<stdio.h>
#include <vector>

using namespace std;

vector<vector<int>> edges;

void bfs(){
	queue<int>q;
	q.push(start);
	d[start] = 0;
	mart[start] = 1;
	while(!q.empty()){
		int v = q.front();
		q.pop();

		for(int i = 0; i < (int)edges[v].size(); ++i){
			if(mark[edges[v][i]] == 0){
				d[edges[v][i]] == d[v] + 1;
				mark[edges[v][i]] = 1;
				q.push(edges[v][i]);
			}
		}
	}
}

int main(){

	int n, m;
	cin >> n >> m;

	for(int i = 0; i < m; i++){
		int x, y;
		cin >> x>> y;

		edges[x].push_back(y);
	}

	for(int i = 0; i < n; i++){
		if(!used[i]){
			dfs(i);
		}
	}

}