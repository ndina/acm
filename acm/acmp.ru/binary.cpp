#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, q, r, i = 0, cnt = 0, res = 0;
	cin >> n;
    int a[100];
   // int res[100];

    do {
     q = n / 2;
     r = n % 2;
     a[i] = r;
     n = q;
     i++;
     cnt++;
    }

    while(n > 0);
     int  m = 1;

        for(int i = cnt; i > 0; i--){
           if(a[i - 1] != 0){
             res += a[i - 1] * m;
           }
           m *= 2;
        }

     

     cout << res;
    
}