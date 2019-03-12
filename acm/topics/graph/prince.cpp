#include <bits/stdc++.h>

using namespace std;

vector<int>g[1010];
int vis[1010];
int cnt = 0;
//char c[1000][1000];
int m, n;
int test;
string c[100];


void dfs(int x, int y){

	if(x < 0 || y < 0 || x == n || y == m) return;

	if(c[x][y] == '#') return;
	
	if(c[x][y] == '.'){
       cnt++; 
	   c[x][y] = '#';
	}


	dfs(x + 1, y);
	dfs(x - 1, y);
	dfs(x, y + 1);
	dfs(x, y - 1);
}

int main(){	
	cin >> test;
	int num = 1;
	while(test--){
		int i = 0, j;

		cin >> m >> n;

		
      	  for(i = 0; i < n;i++){
            
                cin >> c[i];
                // if(c[i][j] == '@'){
                // 	x = i;
                // 	y = j;
                // }
            
          }
       	
          for(i = 0; i < n; i++){
            for(j = 0; j < m; j++)
                if(c[i][j] == '@')
                  break;
              if(j < m) break;
          }

        cnt = 1;

        dfs(i,j);

        printf("Case %d: %d\n", num++, cnt);

     }   

    return 0;
}