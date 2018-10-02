#include <iostream>
#include <queue>
#include <cstdio>
#include <algorithm>

using namespace std;

void solve(int est){

	queue <int> q;
	int t, n, m;
	int cnt = 0;
	cin >> t;
    int a[n];

	cin >> n >> m;
    for(int i = 1; i <= n; i++){
		cin >> a[i];
        q.push(a[i]);
		}
	

	sort(a, a + n);

	while(true){
		if(q.front() < a[q.size() - 1]){
			q.push(q.front());
		}
		else{
			cnt++;
			if(m == 0){
				cout << cnt << "\n";
				return ;
			}
		}
		q.pop();
		m = (m - 1 + q.size()) % q.size();
	}
}
int main(){

int test = 0;
cin >> test;
while(test--){
	solve(test);
}
}