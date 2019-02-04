#include <bits/stdc++.h>

using namespace std;
#define ll long long

int n,m,k;

int a[105],num[1010],vis[1010];

vector<int> g[1010];

void dfs(int v)
{
    for(int i=0;i<g[v].size();++i)
    {
        if(vis[g[v][i]] == 0)
        {
            vis[g[v][i]]=1;
            num[g[v][i]]++;
            dfs(g[v][i]);
        }
    }
}
int main()
{
    int test;

    cin >> test;

    for(int t=1; t<=test; ++t)
    {
        memset(num,0,sizeof(num));

        cin >> k >> n >> m;

        for(int i=0;i<=n;++i)
            g[i].clear();

        for(int i=0;i<k;++i)
            scanf("%d",&a[i]);

        while(m--)
        {
            int x,y;
            cin >> x >> y;
            g[x].push_back(y);
        }
        for(int i=0;i<k;++i)
        {
            memset(vis,0,sizeof(vis));
            vis[a[i]]=1;
            num[a[i]]++;
            dfs(a[i]);
        }
        int cnt = 0;
        for(int i=1;i<=n;++i)
        {
            if(num[i]==k)
                cnt++;
        }
        cout << "Case " << t << ": " << cnt << endl;
    }
    return 0;
}