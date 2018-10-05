#include <iostream>
#include <vector>

using namespace std;
vector<int>v;
int main(){
	int n;
	int cnt = 0;
	cin >> n;

	for(int i = 1; i <=n; i+=2){
		for(int j = 1; j <= i; j++){
			if(i % j == 0){
				cnt++;
			}
		}
		if(cnt == 8){
			v.push_back(i);
		}
		cnt = 0;
	}


	cout << v.size();

	return 0;
}