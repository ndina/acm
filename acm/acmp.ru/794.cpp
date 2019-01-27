#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;

	cout << a * (b / c + min(b, c - 1));

	return 0;
}