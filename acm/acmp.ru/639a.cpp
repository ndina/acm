#include <bits/stdc++.h>

using namespace std;

multimap<double, string>m;

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
			m.insert(pair<double, string> (ball, name));
		}
	}
    multimap<double, string>::reverse_iterator it;
    cout << cnt << endl;
	for(it = m.rbegin(); it != m.rend(); it++){
		
		printf("%.2f", (*it).first);
		cout << " " << (*it).second << endl;
	}

	return 0;
}