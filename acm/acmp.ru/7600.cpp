#include <bits/stdc++.h>

using namespace std;

int  main(){
	double n, v, l;
	cin >> n >> v >> l;

	double vel = v / 60;



	 double sum1 = 0;

	 int t;
	 double sum2 = 0;


	for(int i = 0; i < n; i++){
		int x;
		cin >> x >> t;
		//vv.push_back(a[i]);
		sum1 += t;
	}

	double res = l/vel;
	res += sum1;

	printf("%.2f", res);

	return 0;
}