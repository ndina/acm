#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
vector <int> v, vv, vvv;
int main(){
	int n, cnt = 0, cnt1 = 0;
    cin >> n;
    int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i]; 
		if(a[i] > 0){
			cnt += a[i];
			vv.push_back(i);
		}
		else if(a[i]<0){
			cnt1 +=(a[i]);
			v.push_back(i);
		}
		else{
			vvv.push_back(a[i]);
		}
	}
	// if(cnt == 0 || cnt1 == 0){
	// 	// cout << 1 << endl;
	// 	cout << 0 ;
		
	// }
	if(vvv.size() == n){
		cout << 0;
		return 0;
	}
	else if(cnt > abs(cnt1)){
		cout << vv.size() << endl;
		for(int i = 0; i < vv.size(); i++){
			cout << vv[i] + 1 << " ";
		}
	}
	else if(cnt < abs(cnt1)){
		cout << v.size() << endl;
		for(int i = 0; i < v.size(); i++){
			//cout << v.size() << endl;
			cout << v[i] + 1 << " ";
		}
	}
	else{
		  cout << vv.size() << endl;
		for(int i = 0; i < vv.size(); i++){
			cout << vv[i] + 1 << " ";
		}

	}
return 0;
}