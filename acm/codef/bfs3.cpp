#include <iostream>
#include <cmath>
#include <stdio.h>
#include <algorithm>

using namespace std;

void bfs(int u) {
  used[u] = true;
  p[u] = u;
  dist[u] = 0;
  queue<int> q;
  q.push(u);
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int i = 0; i < (int) g[u].size(); i++) {
      int v = g[u][i];
      if (!used[v]) {
        used[v] = true;
        p[v] = u;
        dist[v] = dist[u] + 1;
        q.push(v);
      }
    }
  }
}

int main(){

	return 0;
}