#include <cstdio>
#include <vector>
#include <stack>
 
using namespace std;
 
void visit(vector<vector<int> > &adj, vector<int> &list,
        vector<bool> &seen, int u) {
    for (int i = 0; i < adj[u].size(); i++) {
        if (!seen[adj[u][i]]) visit(adj, list, seen, adj[u][i]);
    }
    seen[u] = true;
    list.insert(list.begin(), u + 1);
}
 
int main() {
    int n, m, u, v;
    vector<vector<int> > adj;
    for (;;) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) break;
        adj.clear();
        adj.resize(n);
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &u, &v);
            adj[u - 1].push_back(v - 1);
        }
 
        // Topological sort.
        vector<int> list;
        vector<bool> seen;
        seen.clear();
        seen.resize(n);
        for (int i = 0; i < n; i++) seen[i] = false;
        for (int i = 0; i < n; i++) {
            if (!seen[i]) {
                visit(adj, list, seen, i);
            }
        }
 
        printf("%d", list[0]);
        for (int i = 1; i < list.size(); i++)
            printf(" %d", list[i]);
        printf("\n");
    }
}