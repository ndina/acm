#include <bits/stdc++.h>

using namespace std;
vector<int>v;
#define pb push_back

int main(){
	int n;
	cin >> n;

	while(n > 0){
		if(n & 1){
			v.pb(1);
			
		}
		else{
			v.pb(0);
			
		}
		n/=2;
	}
	//int cnt = 0;
	int sum = 0;
	int cnt = v.size() - 1;

	for(int i = 0; i < v.size(); i++){
		sum += v[i] * pow(2, cnt);
		cnt--;
	}

	// for(int i = v.size() - 1; i > 0; i--){
	// 	sum += v[i] * pow(2, cnt);
	// 	cnt++;
	// }

	cout << sum;

	return 0;
}