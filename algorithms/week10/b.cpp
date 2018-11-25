#include <bits/stdc++.h>

#define ll long long

using namespace std;

const int p = 31;

ll get_hash(string s){
   ll hash = 0;
   ll add = 1;
   int p = 31;

   for(int i = 0; i < s.size(); i++){
   	hash += (s[i] - 'a' + 1) * add;
   	add *= p;
   }

   return hash;
}


int main(){

	int n;
	cin >> n;
	string s;

	map<ll, int> m;

	for(int i = 0; i < n; i++){
		cin >> s;
		ll h = get_hash(s);
		int z = m[h];
		if(m[h] == 0){
			cout << "OK" << endl;
			m[h] = 1;
		}
		else{
			cout << s << z << endl;
			m[h] ++;

		}
	}
	return 0;
}