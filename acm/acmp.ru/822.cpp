#include <iostream>
#include <cmath>
#include<cstring>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main(){

	long double x1, x2, y1, y2, x3, y3;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	long double s;

	s = abs(((x1-x3) * (y2 - y3) - (y1 - y3)*(x2 - x3))/2);
    
    cout << s;
	//printf("%.1f", s);

	return 0;
}