#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
int a[105][105];
int mini[105];
bool vis[105];
int n;
int findmin()
{
    
    int m=100000,k=-1;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i] && mini[i]<m)
        {
            m=mini[i];k=i;
        }
    }
    return k;
}

int main()
{
    
    int ans;

    
    while(scanf("%d",&n)!=EOF)
    {
        ans=0;
        memset(vis,false,sizeof(vis));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(int i=1;i<=n;i++) mini[i]=a[1][i];
        vis[1]=true;
        for(int i=1;i<n;i++)
        {
            int k=findmin();
            vis[k]=true;ans+=mini[k];
            for(int j=1;j<=n;j++)
            {
                if(a[k][j]<mini[j])
                {
                    mini[j]=a[k][j];
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}