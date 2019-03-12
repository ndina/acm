#include <iostream>
#include <cmath>
#include <map>
#include<vector>


using namespace std;
map<int, int>mp;
int main(){
	int n, m;
	cin >> n >> m;
	int x, y;
	// vector<int>v(n);
	// for(int i = 0; i < 2 * m; i++){
	// 	cin >> x;
	// 	++v[x-1];
	// }
	// for(int i = 0; i < n; i++){
	// 	cout << v[i] << " ";
	// }

	for(int i = 0; i < m; i++){
		cin >> x >> y;
		mp[x]++;
		mp[y]++;
	}

	map<int,int>::iterator it;
	for(it = mp.begin(); it != mp.end(); it++){
		cout << (*it).second << " ";
	}
	cout << endl;

	return 0;

	
}