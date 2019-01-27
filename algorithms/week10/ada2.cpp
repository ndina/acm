#include <bits/stdc++.h>

using namespace std;

vector<long long> p_pow(1000001);
const int p = 31;

void countPowers(){
	p_pow[0] = 1;
	for (int i = 1; i < p_pow.size(); ++i)
		p_pow[i] = p_pow[i-1] * p;
	   
}
void rabinKarp(string str, int pat_size){
	set<long long> unique;
	vector<long long> h(str.size()); 
	for (int i = 0; i < str.size(); ++i) 
	{
		h[i] = (str[i] - 'a' + 1) * p_pow[i]; 
		if (i)  h[i] += h[i-1];
		cout << h[i] << " ";
	}

	for (int i = 0; i < str.size() - pat_size + 1; ++i)
	{
		long long cur_h = h[i + pat_size - 1];
		if (i)  cur_h -= h[i-1];
		//cout << cur_h << ' ';

		int num = cur_h * p_pow[str.size() - pat_size - i];

		//cout << num << " ";


		unique.insert(num);
	}

	cout << unique.size() << endl;
}
int main(){
	countPowers();
	int n;
	cin >> n;
	while(n--){
		string str;
		int str_size, pat_size;
		cin >> str_size >> pat_size;
		cin >> str;
		rabinKarp(str, pat_size);
	}
	
}