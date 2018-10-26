#include <bits/stdc++.h>

using namespace std;

int f(int d, int  v, int l,int  r){

   int len = d / v;
   int tmp = r / v - (l - 1) / v;

   int res = len - tmp;

    return res;
}

int main(){
   
    int n;

    int d, v, l, r;

    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> d >> v >> l >> r;
    	cout << f(d, v, l, r) << endl;
    }


	return 0;
}