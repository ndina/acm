#include<bits/stdc++.h>
using namespace std;
int i,j,n,m,mas[200005];
int main()
{
    std::cin.sync_with_stdio(false);
    std::cin.tie(0);
    cin >> n;
    i=0;
    while (i<n)
    {
        cin >> mas[i];
        i++;
    }
    sort(mas,mas+n);
    cout << min(mas[n-1]-mas[1],mas[n-2]-mas[0]);
    return 0;
}