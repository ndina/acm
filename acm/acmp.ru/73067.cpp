#include <iostream>
#include <cmath>
using namespace std;

main(){ 
int a,b,c;

cin >>a>>b>>c;

if (a>=99 && a<=699 &&
b>=99 && b<=699 &&
c>=99 && c<=699)
cout << max(max(a,b),c);
else cout <<"Error";
}