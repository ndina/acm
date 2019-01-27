#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
#define ll long long

struct p{
   int cnt;
   int t;
};

bool cmp(p a, p b){
	if(a.cnt == b.cnt){
		return a.t < b.t;
	}
	return a.cnt > b.cnt;
}

int main(){

	int k = 0, x, y;
	p res[1000];
	int m, n;
	cin >> m >> n;
	for(int i = 0; i < m; i++){
       cin >> res[i].cnt >> res[i].t;
	}

	sort(res, res + m, cmp);

	for(int i = 0; i < m; i++){
		if(res[i].cnt == res[n - 1].cnt && res[i].t == res[n - 1].t ){
			k++;
		}
	}

	cout << k;

	return 0;





}