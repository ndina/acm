#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,a1,a2;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; ++i)
    {
        cin >> a[i];  // 1 2 3 4 5
    }
    for ( int i = 0; i < n/2; ++i) // 3
    {
     a1=a[i]; // (0) 1
     a2=a[n-1-i];// (4) 5
     a[i]=a2; // 1->5;
     a[n-1-i]=a1; // 5>1
    }
    for ( int i = 0; i < n; ++i)
    cout << a[i]<< ' ' ;
    return 0;
}