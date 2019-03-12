#include <iostream>
#include <cmath>
using namespace std;

int main()
{
long double x1,x2,x3,y1,y2,y3;
long double d1,d2,d3;
long double p, s;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
d2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
d3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
p=(d1+d2+d3)/2;
s=sqrt(p*(p-d1)*(p-d2)*(p-d3));
cout << s;
return 0;
}