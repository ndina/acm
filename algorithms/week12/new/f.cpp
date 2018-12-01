#include <bits/stdc++.h>
using namespace std;

bool used[110];
vector<int> g[110];
int cnt = 1;
int in[110];
int out[110];


void dfs(int v)
{
	for (int i = 0; i < g[v].size(); i++)
	{
		if (!used[g[v][i]])
		{
			used[g[v][i]] = true;
			in[g[v][i]] = cnt++;
			dfs(g[v][i]);
			out[g[v][i]] = cnt++;
		}
	}
}

void solveF()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int from, m, v;
		cin >> from >> m;
		for (int j = 0; j < m; j++)
		{
			cin >> v;
			g[from].push_back(v);
		}
		sort(g[from].begin(), g[from].end());
	}

	for (int i = 1; i <= n; i++)
	{
		if (!used[i])
		{
			used[i] = true;
			in[i] = cnt++;
			dfs(i);
			out[i] = cnt++;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		cout << i << " " << in[i] << " " << out[i] << endl;
	}
}

int main()
{
	solveF();
	return 0;
}