#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> g[10000];
bool used[11000];
vector<int> d(1010), p(1010); 
int n;

queue<int>q;

void bfs(int v){
	q.push(v);
	used[v] = true;
	while(!q.empty()){
		int u = q.front();
		//cout << u << ' ';
		q.pop();
		for(int i = 0; i < g[u].size(); i++){
			int to = g[u][i];
			if(!used[to]){
				used[to] = true;
				q.push(to);
				d[to] = d[u] + 1;
			}
		}
	}

	for(int i = 1; i <= n; ++i) {
		if(used[i] == false){
			cout << i << " "<<-1 << endl;
		}else{
		cout << i << ' ' << d[i] << endl;}
	}


}


int main(){
	cin >> n;

	for(int i = 1; i <= n; i++){
	  int v, k;
	  cin >> v >> k;

	    for(int j = 0; j < k; j++){
		int x;
		cin >> x;
		g[v].push_back(x);
		}
    }

    bfs(1);

}