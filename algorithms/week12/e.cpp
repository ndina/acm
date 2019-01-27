#include <bits/stdc++.h>
using namespace std;

int g[110][110];

int main()
{
 int n;
 cin >> n;
 for (int i = 0; i < n; i++)
  for (int j = 0; j < n; j++)
   g[i][j] = 0;
 for (int i = 0; i < n; i++)
 {
  int v, k;
  cin >> v >> k;
  --v;
  for (int j = 0; j < k; j++)
  {
   int x;
   cin >> x;
   g[v][--x] = 1;
  }
 }
 for(int o=0;o<n;o++){
  for(int k=0;k<n-1;k++){
   printf("%d ",g[o][k]);
  }
  printf("%d\n",g[o][n-1]);
 }
}