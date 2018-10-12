#include <iostream>
#include <cmath>

using namespace std;

int n;
int used[100100], g[100100];
vector<int> ans;

void dfs(int v){
	used[v] = 1;
	for(int i = 0; i < g[v].size(); i++){
		int to = g[v][i];
		if(!used[to]){
			dfs(to);
		}
	}
	asn.push_back(v);
}

void sort(){
	for(int i = 0; i < n; i++){
		used[i] = 0;
	}
	for(int i = 0; i < n; i++){
		if(!used[i]){
			dfs(i);
		}
	}
	reverse(ans.begin(), ans.end());

}

int main(){

 int n, m;

 


}