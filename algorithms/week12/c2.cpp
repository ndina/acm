#include <iostream>
#include <queue>
#include <vector>

using namespace std;
#define pb push_back

vector<int> g[101010];
bool visited[101010];
int color[10000];

void bfs(int v){
	queue<int>q;
	q.push(v);
	visited[v] = true;
	color[v] = 1;

	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int i = 0; i < g[u].size(); i++){
			int to = g[u][i];
           if(visited[to] == false){
           	visited[to] = true;
           	color[to] = ((-1)*color[u]);
           	cout << color[to] << " ";
           	q.push(to);
           }
           else if(color[to] == color[u]){
           	cout <<"NOT BICOLORABLE.\n";
           	return;
           }
		}		
	}
	cout <<"BICOLORABLE\n";
}

int main(){
	int v, e, start;
	int x, y;
	while(cin >> v){
		if(v == 0) break;
		cin >> e; 
		for(int i = 0; i < v; i++){
			g[i].clear();
		}
		for(int i = 0; i < e; i++){
		   
		   cin >> x >> y;
		   g[x].pb(y);
		   g[y].pb(x);
		  if(i == 0) start = x;
	    }
	    bfs(x);
	}
  return 0;	
}