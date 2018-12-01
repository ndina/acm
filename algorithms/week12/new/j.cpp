#include <bits/stdc++.h>
using namespace std;

vector<pair<int, pair<int, int> > > g;

vector<pair<int, int> > point;

int r[550];
int p[550];

double getDist(pair<int, int> x, pair<int, int> y)
{
	int x1 = x.first, x2 = y.first;
	int y1 = x.second, y2 = y.second;

	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
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
	else if (r[y] < r[x]) p[y] = x;
	else 
	{
		p[x] = y;
		r[y]++;
	}

}

void solveJ()
{
	int t;
	cin >> t;

	for (int it = 0; it < t; it++)
	{
		int k, n;
		cin >> k >> n;
		for (int i = 0; i < n; i++)
		{
			int x, y;
			cin >> x >> y;
			point.push_back(make_pair(x, y));
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				g.push_back(make_pair(getDist(point[i], point[j]), make_pair(i, j)));
			}
		}

		int mn = 0;
		vector<pair<int,int> > result;
		vector<double> dist;

		sort(g.begin(), g.end());
		for (int i = 0; i < 550; i++)
		{
			p[i] = i;
		}

		for (int i = 0; i < g.size(); i++)
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

		for (int i = 0; i < result.size(); i++)
		{
			dist.push_back(getDist(point[result[i].first], point[result[i].second]));
		}

		sort(dist.begin(), dist.end());
		reverse(dist.begin(), dist.end());

		cout << fixed << setprecision(2) << dist[k - 1] << endl;

		for (int i = 0; i < 550; i++)
		{
			p[i] = 0;
			r[i] = 0;
		}

		g.clear();
		point.clear();
	}
}

int main()
{
	solveJ();
	return 0;
}