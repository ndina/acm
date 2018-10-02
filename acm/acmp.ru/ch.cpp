#include <iostream>
#include <cmath>
 
using namespace std;
int main()
{
    int n;
    cin >> n;
     int a[n];
     int k=0;
     for ( int i = 1; i <= n; ++i)
     {
        cin >> a[i];
        if (a[i] != a[i-1])
        k++;
       
     }
     cout << k;
}