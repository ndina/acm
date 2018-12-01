#include <bits/stdc++.h>
using namespace std;

int n, m;

bool used[110][110];

queue<pair<int, int> > q;

char c[110][110];

int cnt = 0;

int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

void bfs(int i, int j)
{
	q.push(make_pair(i, j));

	used[i][j] = true;

	while (!q.empty())
	{
		int y = q.front().first;
		int x = q.front().second;

		q.pop();

		for (int k = 0; k < 8; k++)
		{
			int yy = y + dy[k];
			int xx = x + dx[k];

			if ((yy >= 0) and (yy < n) and (xx >= 0) and (xx < m))
				if (!used[yy][xx] and c[yy][xx] == '@')
				{
					used[yy][xx] = true;
					q.push(make_pair(yy, xx));
				}
		}
	}

	cnt++;
}

void solveB()
{
	while (true)
	{
		cnt = 0;

		cin >> n >> m;

		if (n == 0) break;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				used[i][j] = false;

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> c[i][j];

		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (c[i][j] == '@' && !used[i][j])
					bfs(i, j);

		cout << cnt << endl;
	}

}


int main()
{
	solveB();
	return 0;
}