#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>


using namespace std;

vector<int>v;
#define pb push_back

int main(){
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	v.pb(a);
	v.pb(b);
	v.pb(c);
	v.pb(d);

	sort(v.begin(), v.end());

	if(v[0] == 1 && v[1] == 4 && v[2] == 7 && v[3] == 9){
		cout << "YES";
		return 0;
	}
	cout << "NO";

	return 0;



}