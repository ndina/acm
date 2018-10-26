#include <iostream>

using namespace std;

string rec(int l, int r, int a[], int x){
    if(l <= r){

        int mid = (l+r)/2;

        if(a[mid] == x)
        	return "Yes";

        if(a[mid] < x)return rec(mid+1, r, a, x);  

        return rec(l, mid-1, a, x);
    }

    return "No";
}
int main(){
    
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    	cin>>a[i];
        int x;
        cin>>x;
    cout<<rec(0, n-1, a, x);
}