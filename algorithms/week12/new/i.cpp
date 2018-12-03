#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, pair<int, int> > > g;

vector<int> gg[110];

vector<pair<int,int> > result;

int p[110];
int r[110];

bool used[110];

void dfs(int v)
{
	used[v] = true;

	for (int i = 0; i < gg[v].size(); i++)
	{
		int top = gg[v][i];
		if (!used[top])
		{
			used[top] = true;
			dfs(top);
		}
	}
}

int getParent(int v)
{
	if (p[v] == v) return v;
	return p[v] = getParent(p[v]);
}

void merge(int x, int y)
{
	x = getParent(x);
	y = getParent(y);
	if (x == y) return;
	else if (r[x] < r[y]) p[x] = y;
	else if (r[x] > r[y]) p[y] = x;
	else
	{
		p[x] = y;
		r[y]++;
	}
}

void solveI()
{
	int t;
	cin >> t;

	for (int it = 0; it < t; it++)
	{
		int n, m;
		cin >> n >> m;

		for (int i = 0; i < m; i++)
		{
			int u, v, cost;
			cin >> u >> v >> cost;

			g.push_back(make_pair(cost, make_pair(u, v)));
		}

		long long mn = 0;

		sort(g.begin(), g.end());

		for (int i = 1; i < 110; i++)
		{
			p[i] = i;
			r[i] = 0;
		}

		for (int i = 0; i < m; i++)
		{
			int cost = g[i].first;
			int x = g[i].second.first;
			int y = g[i].second.second;

			x = getParent(x);
			y = getParent(y);

			if (x != y) 
			{
				mn += cost;
					result.push_back(g[i].second);
				merge(x, y);
			}
		}

		bool b = false;

		for (int k = 0; k < result.size(); k++)
		{
			for (int i = 1; i < 110; i++)
			{
				p[i] = i;
				r[i] = 0;
				used[i] = false;
				gg[i].clear();
			}

			long long c = 0;

			for (int i = 0; i < m; i++)
			{
				int cost = g[i].first;
				int x1 = g[i].second.first;
				int y1 = g[i].second.second;

				if (x1 == result[k].first && y1 == result[k].second) continue;

				int x = getParent(x1);
				int y = getParent(y1);

				if (x != y) 
				{
					c += cost;
					merge(x, y);
					gg[x1].push_back(y1);
					gg[y1].push_back(x1);
				}
			}

			dfs(1);

			for (int i = 1; i <= n; i++)
			{
				if (!used[i])
				{
					c = mn - 1;
					break;
				}
			}
 
			if (mn == c) 
			{
				cout << "Not Unique!" <<  endl;
				b = true;
				break;
			}

		}

		if (!b) cout << mn << endl;

		g.clear();
		result.clear();
	}
}

int main()
{
	solveI();
	return 0;
}	