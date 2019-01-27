#include <iostream>
using namespace std;
long long cost,ans,num;
int n;
string s[100];

int main()
{  
     cin >> n >> cost;
     
    for(int i=1;i<=n;i++)
        cin >> s[i];
    for(int i = n;i >= 1;i--)
    {
        num *= 2;

        if(s[i] == "halfplus")
            num ++;

        ans += num;
    }

    cout<<ans * cost / 2;

    return 0;
}