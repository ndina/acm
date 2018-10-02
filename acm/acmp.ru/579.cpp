#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
vector <int> v, vv;
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
		else{
			cnt1 += abs(a[i]);
			v.push_back(i);
		}
	}
	if(cnt == 0 || cnt1 == 0){
		cout << 1 << endl;
		cout << 0 ;
		
	}
	else if(cnt > cnt1){
		cout << cnt << endl;
		for(int i = 0; i < vv.size(); i++){
			cout << vv[i] + 1 << " ";
		}
	}
	else{
		for(int i = 0; i < v.size(); i++){
			cout << cnt1 << endl;
			cout << v[i] + 1 << " ";
		}
	}
return 0;
}