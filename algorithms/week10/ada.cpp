#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main()
{

	long long hash[1000000], p_pow[1000000];
	long long p = 29;
	long long t, n, k;
	string s;
	cin >> t;
	p_pow[0] = 1;
	for(long long i = 0; i < t; i++)
	{
		set<long long> my_set;
		cin >> n >> k;
		for(long long i = 1; i < n; i++)
		{
			p_pow[i] = p_pow[i - 1] * p;
		}
		cin >> s;
		hash[0] = s[0];
		for(long long j = 1; j < n; j++)
		{
			hash[j] = hash[j - 1] + s[j] * p_pow[j];
		}
		for(long long m = 0; m + k - 1 < n; m++)
		{
			long long h = hash[m + k - 1] - hash[m - 1];
			long long number = h;
			number = number * p_pow[n - m - 1];
			my_set.insert(number);
		}
		cout << my_set.size() <<"\n";

		my_set.clear();
		//my_set.erase(my_set.begin(), my_set.end());
	}
	return 0;
}