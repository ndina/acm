#include <bits/stdc++.h>
using namespace std;

int n;

vector <int> g[200];
int color[200];
bool used[200];
bool colored[200];
queue<int> q;

void bfs(int v)
{
	q.push(v);
	used[v] = true;
	colored[v] = true;
	color[v] = 1;

	while(!q.empty())
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
			}

			if (!colored[to])
			{
				color[to] = color[top] * (-1);
				colored[to] = true;
			} 

			else if (color[to] == color[top])
			{
				cout << "NOT BICOLORABLE." << endl;
				return;
			}
		}
	}

	cout << "BICOLORABLE." << endl;
}

void solveC()
{
	while (true)
	{
		cin >> n;
		if (n == 0) break;

		for (int i = 0; i < 200; i++)
			g[i].clear();

		for (int i = 0; i < 200; i++)
			color[i] = 0;

		for (int i = 0; i < 200; i++)
			used[i] = false;

		for (int i = 0; i < 200; i++)
			colored[i] = false;

		while (!q.empty())
			q.pop();

		int l;
		cin >> l;

		for (int i = 0; i < l; i++)
		{
			int u, v;
			cin >> u >> v;

			g[u].push_back(v);
			g[v].push_back(u);
		}

		bfs(0);

	}
}

int main()
{
	solveC();
	return 0;
}