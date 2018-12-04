#include <bits/stdc++.h>

using namespace std;

vector<int> prefix_function(string s){
	int n = s.size();
	vector<int> p(n);
    for(int i = 1; i < n; i++){
    	int j = p[i-1];
    	while(j > 0 && s[i] != s[j])
    		j = p[j-1];
    	if(s[i] == s[j]) j++;
    	p[i] = j;
    }
    return p;
}

int main()
{
	string s;
	while (cin >> s)
	{
		if (s == ".") break;
		vector<int> pi = prefix_function(s);
		int n = s.size();
		int k = n - pi.back();
		if(n % k == 0)
		{
			cout << n / k << endl;
		}
		else cout << n;
	}
}