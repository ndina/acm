#include<iostream>
using namespace std;
main ()
{
int i,j,k;
string s[4];
freopen("input.txt","r",stdin);
for(i=0;i<4;++i)cin>>s[i];
for(i=0;i<3;++i)
for(j=0;j<3;++j)
{k=0;
if (s[i][j]=='B')k++;
if (s[i][j+1]=='B')k++;
if (s[i+1][j]=='B')k++;
if (s[i+1][j+1]=='B')k++;
if(k==0||k==4){cout<<"No";return 0;}
}
cout<<"Yes";
}