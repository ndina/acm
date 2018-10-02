#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

double triangleRatio(double ab,double ac,double bc,double ad)
{
double ae,de,s1,s2,largeTriangleArea,smallTriangleArea,trapheziumArea, ratio;
ae = (ad*ac)/ab;
de = (ad*bc)/ab;
s1 = (ab+ac+bc)/2.0;
s2 = (ad+ae+de)/2.0;
largeTriangleArea = sqrt(s1 * (s1-ab) * (s1-ac) * (s1-bc));
smallTriangleArea = sqrt(s2 * (s2-ad) * (s2-ae) * (s2-de));
trapheziumArea = largeTriangleArea - smallTriangleArea;
ratio = smallTriangleArea/trapheziumArea;
return ratio;
}

int main(){
	double x, l, r, ab, ac, bc, ad;
	double eps = 1e-10;
	cin >> x;
	for(int i = 0; i < x; i++){
		cout << "Case " + i + 1 << " ";
        cin >> ab >> ac >> bc >> ad;
	    l = 1;
	    r = ab;
        while(r  - l > eps){
   	    double t =  triangleRatio(ab, ac, bc, ad) / 2.0;
   	    if(t*t*t <= ab){
   		l = t;
     	}
   	    else{
   		r = t;
    	}

        }
        cout << r << endl;
	}

   return 0;
}