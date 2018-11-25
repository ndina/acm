#include<bits/stdc++.h>
using namespace std;
int m,n;
char str[1002][1002];
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
void DFS(int x,int y){

    if(x < 0 || y < 0 || x == m || y == n)return;
    if(str[x][y] != '@')return;
    if(str[x][y] == '@')str[x][y] = '*';
    DFS(x,y+1);
    DFS(x,y-1);
    DFS(x+1,y);
    DFS(x-1,y);
    DFS(x+1,y+1);
    DFS(x+1,y-1);
    DFS(x-1,y+1);
    DFS(x-1,y-1);
}
int main(){
    int cnt;
    while(scanf("%d %d",&m,&n)!=EOF){
        if(m == 0)break;
        for(int i = 0; i < m;i++){
            for(int j = 0; j < n; j++){
                cin >> str[i][j];
            }
        }
        cnt = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(str[i][j] != '*'){
                  DFS(i,j);
                  cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}