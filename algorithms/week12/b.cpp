#include <bits/stdc++.h>

using namespace std;

char c[1000][1000];
int n, m;

void dfs(int x, int y){
	if(x < 0 || y < 0 || x == m || x == n) return;

	if(c[x][y] != '@') return;

	if(c[x][y] == '@') c[x][y] = '*';

	dfs(x, y + 1);
	dfs(x + 1, y + 1);
	dfs(x + 1, y);
	dfs(x - 1, y - 1);
	dfs(x, y - 1);
	dfs(x + 1, y - 1);
	dfs(x - 1, y);
	dfs(x - 1, y + 1);
}

int main(){
    int cnt;
    while(scanf("%d %d",&m,&n)!=EOF){
        if(m == 0)break;
        for(int i = 0; i < m;i++){
            for(int j = 0; j < n; j++){
                cin >> c[i][j];
            }
        }
        cnt = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(c[i][j] != '*'){
                  dfs(i,j);
                  cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}