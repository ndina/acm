#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
#define pb push_back
vector<int>v;
int main(){
	int n;
	cin >> n;

	int sum1 = 0, sum3 = 0, sum5 = 0;
	int sum33 = 0, sum11 = 0, sum55 = 0;

	while(n--){
		int x;	
		cin >> x;
		sum5 += x;
		sum55 += sum5;
		v.pb(x);
	}

	for(int i = v.size() - 1; i >= 0; i--){
		sum3 += v[i];
		sum33 += sum3;

	}
	sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++){
    	sum1 += v[i];
    	sum11 += sum1;
    }
    
    if(sum11 <= sum55 && sum11 <= sum33){
    	cout << "1";
    }
    else if(sum33 <= sum55 && sum33 <= sum11){
    	cout << 3;
    }
    else{
    	cout << 5;
    }
   // cout << sum11 << " " << sum33 << "  " << sum55 << " ";
    return 0;}
