#include <iostream>
#include <cmath>
#include<stdio.h>
using namespace std;
int main()
{
	int n;

	double ab, ac, bc, rat;

	double ad;
	int res = 1;

	//cin >> n;
    scanf("%d",&n);

	while(n--){
		//cin >> ab >> ac >> bc >> rat;
		scanf("%lf%lf%lf%lf",&ab,&ac,&bc,&rat);

		//ad =  sqrt((ab * ab * ra) / (ra));

		ad = sqrt((ab * ab * rat) / (rat + 1));

	    printf("Case %d: ",res++);


		printf("%.10lf\n",ad);

	/*	cout << "Case " << res <<":" << " " << ad << endl;
		res++;
		*/

		
	}
	return 0;
}
