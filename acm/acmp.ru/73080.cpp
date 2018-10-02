#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin >> n;
    d=n%10;
    c=n/10%10;
    b=n/100%10;
    a=n/1000;
    if(a==d && b==c){
     
        cout <<"yes";
    } 
    else cout <<"no";
    return 0;
}