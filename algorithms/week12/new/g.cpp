#include <bits/stdc++.h>
using namespace std;

bool used[110];
vector<int> g[110];
int d[110];
queue<int> q;

void bfs(int v)
{
	q.push(v);
	used[v] = true;
	while (!q.empty())
	{
		int top = q.front();
		q.pop();
		for (int i = 0; i < g[top].size(); i++)
		{
			int to = g[top][i];
			if (!used[to])
			{
				used[to] = true;
				q.push(to);
				d[to] = d[top] + 1;
			}
		}
	}
}

void solveG()
{	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int from, m, to;
		cin >> from >> m;
		for (int j = 0; j < m; j++)
		{
			cin >> to;
			g[from].push_back(to);
		}
	}

	bfs(1);

	for (int i = 1; i <= n; i++)
	{
		cout << i << " ";
		if (i != 1 && d[i] == 0) cout << -1 << endl;
		else cout << d[i] << endl;
	}
}

int main()
{
	solveG();
	return 0;
}