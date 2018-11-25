#include <bits/stdc++.h>

using namespace std;

vector <int > g[10000];

void bfs (int v) {
   queue <int > q;
   int visited[100000] = {0};
   int color[100000];
   q.push(v);
   color[v] = 1;  
   visited[v] = 1; 
   while (!q.empty()) {
      int u = q.front();
      q.pop();
      for (int i = 0; i < g[u].size(); i++) {
         int to = g[u][i];
         if (!visited[to]) {
            color[to] = color[u] * (-1);
            visited[to] = 1;
            q.push(to);
         }
         else if (color[to] == color[u]) { 
            printf ("NOT BICOLORABLE.\n");
            return;
         }
      }
   }
   printf ("BICOLORABLE.\n");
}
int main()
{
   int v, e,  x, y, start;
   while (cin >> v) {
      if (v== 0) break;
      cin >> e;
      for (int i = 0; i < v; i++) g[i].clear();
      for (int i = 0; i < e; i++) {
         cin >> x >> y;
         g[x].push_back (y);
         g[y].push_back (x);
         if (i == 0) start = x; //first node for source..
      }
      bfs(start);
   }
   return 0;
}