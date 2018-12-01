#include <bits/stdc++.h>
using namespace std;

vector<int> g[1010];

vector<int> p;

bool used[1010];

int pic[1010];


void dfs(int v)
{
	used[v] = true;

	pic[v]++;

	for (int i = 0; i < g[v].size(); i++)
	{
		int to = g[v][i];

		if (!used[to])
		{
			used[to] = true;
			dfs(to);
		}
	}
}

void solveD()
{
	int t;
	cin >> t;

	int k, n, m;

	for (int it = 1; it <= t; it++)
	{
		cin >> k >> n >> m;

		int ans = 0;

		p.clear();

		for (int i = 0; i < k; i++)
		{
			int x;
			cin >> x;
			p.push_back(x);
		}

		for (int i = 0; i < m; i++)
		{
			int u, v;
			cin >> u >> v;
			g[u].push_back(v);
		}

		for (int i = 0; i < k; i++)
		{
			dfs(p[i]);

			for (int j = 0; j < 1010; j++)
			{
				used[j] = false;
			}
		}

		for (int i = 0; i < 1010; i++)
		{
			if (pic[i] == k) ans++;
			pic[i] = 0;
			g[i].clear();
		}

		cout << "Case " << it << ": " << ans << endl;

	}
}

int main()
{
	solveD();
	return 0;
}