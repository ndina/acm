#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
 
using namespace std;
 
const int MAX_N = 500;
const int INF = 0x3f3f3f3f;

int used[MAX_N][MAX_N];
int G[MAX_N][MAX_N];
int max_edge[MAX_N][MAX_N];
int vis[MAX_N];
int mincost[MAX_N];
int pre[MAX_N];
int n, m;
int ans1, ans2;
 
void init() {
    memset(vis, 0, sizeof(vis));
    memset(used, 0, sizeof(used));
    memset(mincost, INF, sizeof(mincost));
    memset(max_edge, 0, sizeof(max_edge));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            G[i][j] = (i == j) ? 0 : INF;
}
 
int MST() {
    mincost[1] = 0;
    pre[1] = 1;
    int ret = 0;
    for (int cnt = 1; cnt <= n; cnt++){
        int minval = INF, k;
        for (int i = 1; i <= n; i++){
            if (!vis[i] && minval > mincost[i])
                minval = mincost[k = i];
        }
       
        if (minval == INF)
            return -1;
        used[k][pre[k]] = used[pre[k]][k] = 1;
        vis[k] = 1;
        ret += minval;
        for (int i = 1; i <= n; i++){
          
            if (vis[i])
                max_edge[i][k] = max_edge[k][i] = max(max_edge[i][pre[k]], G[pre[k]][k]);
            else if (G[k][i] != INF && mincost[i] > G[k][i]){
                mincost[i] = G[k][i];
                pre[i] = k;
            }
        }
    }
    return ret;
}
 
int second_MST() {
    int ret = INF;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
    {
        if (i != j && G[i][j] != INF && !used[i][j])
            ret = min(ret, ans1 + G[i][j] - max_edge[i][j]);
    }
    return ret;
}
 
int main() {
 
 int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%d%d", &n, &m);
        init();
        for (int i = 0; i < m; i++){
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            G[u][v] = G[u][u] = w;
        }
        ans1 = MST();
        ans2 = second_MST();
 
        if (ans1 == ans2)
            printf("Not Unique!\n");
        else
            printf("%d\n", ans1);
    }
    return 0;
}