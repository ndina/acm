#include <bits/stdc++.h>

using namespace std;

map<string, double>m;

int main(){
	int n;
	cin >> n;
	double ball;
	string name;
	int cnt = 0;
	int x;

	for(int i = 0; i < n; i++){
		cin >> x;
		cnt += x;
		for(int i = 0; i < x; i++){
			cin >> ball >> name;
			m[name] = ball;
		}
	}
    map<string, double>::iterator it;
    cout << cnt << endl;
	for(it = m.begin(); it != m.end(); it++){
		
		printf("%.2f, (*it).first") << " " << (*it).second << endl;
	}

	return 0;
}