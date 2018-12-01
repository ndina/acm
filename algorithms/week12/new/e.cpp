#include <bits/stdc++.h>
using namespace std;

void solveE()
{
	int n;
	cin >> n;

	int a[n][n];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		int from;
		int m;
		cin >> from;
		cin >> m;
		for (int j = 0; j < m; j++)
		{
			int to;
			cin >> to;
			a[from - 1][to - 1] = 1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j) cout << " ";
			cout << a[i][j];
		}
		cout << endl;
	}
}


int main()
{
	solveE();
	return 0;
}