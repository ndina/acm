#include <bits/stdc++.h>
using namespace std;
vector<int> g[1000];
bool used[1000];
int timer_in[10000];
int timer_out[1000];

int timer = 1;

void dfs(int v){
	used[v] = true;
	timer_in[v] = timer;
	timer++;
	for(int i = 0; i < g[v].size(); i++){
		if(used[g[v][i]] == false){
            dfs(g[v][i]);
		}
	}
	timer_out[v] =timer;
	timer++;
}

int main()
{

int n;
cin >> n;
// for(int i = 1; i <= n; i++){
// 	for(int j = 1; j<= n; j++){
// 		g[i][j] = 0;
// 	}
// }

for(int i = 1; i <= n; i++){
	int v, k;
	cin >> v >> k;

	for(int j = 0; j < k; j++){
		int x;
		cin >> x;
		g[i].push_back(x);
	}
}

for(int i = 1; i <= n; i++){
	if(used[i] == false){
		dfs(i);
	}
}



for(int i = 1; i <= n; i++){
	
   cout <<i << " " <<  timer_in[i] << " " << timer_out[i] << endl;
}
 // int n;
 // cin >> n;
 // for (int i = 0; i < n; i++)
 //  for (int j = 0; j < n; j++)
 //   g[i][j] = 0;
 // for (int i = 0; i < n; i++)
 // {
 //  int v, k;
 //  cin >> v >> k;
 //  --v;
 //  for (int j = 0; j < k; j++)
 //  {
 //   int x;
 //   cin >> x;
 //   g[v][--x] = 1;
 //  }
 // }
 // for(int o=0;o<n;o++){
 //  for(int k=0;k<n-1;k++){
 //   printf("%d ",g[o][k]);
 //  }
 //  
 // }
}