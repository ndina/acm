#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n;
	cin >> n;

	int ans1, ans2, ans3, cnt1, cnt2, cnt3;

	for(int i = 1;i <= n; i++){
		ans1 = pow(2, i);
		if(i == ans1){
			cout << ans1 << endl;
			cnt1++;
		}
		ans2 = pow(3, i);
		if(i == ans2){
			cnt2++;
		}
		ans3 = pow(6, i);
		if(i == ans3){
			cnt3++;
		}
	}

	int res;
	//int res1= (n - cnt1)
	res = (n - cnt3)/((n - cnt1)*(n - cnt2));

	printf("%.6f", res);

	return 0;
}