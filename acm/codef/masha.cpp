#include <iostream>
#include <cmath>


using namespace std;

int main(){

	int x, y, z, t1,t2, t3;

	cin >> x >> y >> z >> t1 >> t2 >> t3;

	long lift =  t2* abs(x - z) + 3*t3 + t2*abs(x - y);

	long lect = abs(x - y) * t1;

	if(lift <= lect){
        cout << "YES";
 	}
	else{
        cout << "NO";
 	}

	return 0;
}