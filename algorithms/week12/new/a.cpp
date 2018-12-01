#include <bits/stdc++.h>
using namespace std;

vector<int> g[110];
vector<int> result;
bool used[110];

void dfs(int v)
{
	used[v] = true;

	for (int i = 0; i < g[v].size(); i++)
	{
		int to = g[v][i];
		if (!used[to])
		{
			dfs(to);
		}
	}

	result.push_back(v);
}

void topoSort(int n)
{
	for (int i = 1; i <= n; i++)
		used[i] = false;
	
	result.clear();

	for (int i = 1; i <= n; i++)
	{
		if (!used[i])
		{
			dfs(i);
		}
	}

	reverse(result.begin(), result.end());

	for (int i = 0; i < result.size(); i++)
	{
		if (i) cout << " ";
		cout << result[i];
	}
	cout << endl;
}

void solveA()
{
	int n, m;
	while (cin >> n >> m)
	{
		if (n == 0 and m == 0) break;
		for (int i = 0; i < m; i++)
		{
			int u, v;
			cin >> u >> v;
			g[u].push_back(v);
		}

		topoSort(n);
	}
}

int main()
{
	solveA();
	return 0;
}