#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a[101][101];
    cin>>n;
    for (int i=1;i<=n;++i)
    for (int j=1;j<=n;++j)
    {
        if ( (i+j-1)==n  )
        a[i][j]=1;
        if ( (i+j-1)<n  )
       
        a[i][j]=0;
        if ( (i+j-1)>n  )
        a[i][j]=2;
       
       
    }
    for (int i=1;i<=n;++i){
   
    for (int j=1;j<=n;++j)
        
    cout<<a[i][j]<<" ";
    cout<<endl;
    }
}
 