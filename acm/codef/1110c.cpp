#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else return gcd(b, a % b);
}

int maxii = -10;
int res;

void solve(int n){
	
	for(int i = 1; i <= n; i++){
		int gcda = gcd(n, i);
		//cout << gcda << endl;
		int x = n ^ i;
		int y = n & i;
		//cout << "x" << x << endl <<"y" <<  y << endl;
		 res = gcd(x,y);

		if(res > maxii){
			maxii = res;
		}
	}
	if(n == 3){
		maxii = 1;
	}
	cout << maxii << endl;
    maxii = 0;
	

}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	int test;
	cin >> test;
	int x;
	for(int i = 0; i < test; i++){
      cin >> x;
      solve(x);
	}



	return 0;


}