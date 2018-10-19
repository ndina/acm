#include <iostream>
#include <algorithm>
#include <bitset>
using namespace std;


int main(){
	int n;
	cin>>n;
	long long ans = 999999999999;
	for(int i = 2; i<= 12; i++){
		for(int msk = 0; msk <=(1<<i); msk++){
			int svn =0, fr = 0;
			long long x;
			for(int j = 0; j < i; j++){
				if((msk & (1<<j)) > 0){
					x = x*10 + 7;
					svn++;
				}
				else {
					x = x*10 + 4;
					fr++;
				}
			}
			if(svn == fr && x >= n){
				ans = min(ans, x);
			}
		}
	}
	cout<<ans;

	return 0;
}