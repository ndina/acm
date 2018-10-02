#include <iostream>
#include <vector>

using namespace std;
vector<int> v;
int main(){
	int n;
	cin >> n;
    int sum1 = 0, cnt = 0;
    for(int i = 1; i <= 1000; i++){
     while(i > 0){
		sum1+=i % 10;
		cnt++;
		i /= 10;
	}
	if(sum1 % cnt == 0){
		v.push_back(i);
	} 
    }
	for(int i = 0; i< n; i++){
		cout << v[i];
	}
}