#include <iostream>
using namespace std;
main()
{
int n,a=0,b=1,c=0,i=0;
cin>>n;
while (c<n)
{
a=b;
b=c;
c=a+b;	
i++;
}
if(c==n)cout<<1<<endl<<i;
else cout<<0;
}