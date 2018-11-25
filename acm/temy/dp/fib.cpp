#include <bits/stdc++.h>


using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    bool ok = false;

    for(int i = 0; i < n; i++){
    	cin >> a[i];
    }

    for(int i = 0; i < n - 1; i +=2){

    	swap(a[i], a[i+1]);
    	
    }


    for(int i = 0; i < n; i++){
    	cout << a[i] << " ";
    }
   
}
