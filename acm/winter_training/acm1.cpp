#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<string>v(1000);
map<string,int> m;

int main(){
	int n;
	cin >> n;
	string s, win;
	int maxi = 0;

    
    for(int i = 0; i < n; i++){
    	cin >> s;
    	m[s]++;
    	if(m[s] >= maxi){
    		maxi = m[s];
    		win = s;
    	}
    }

    cout << win;
    return 0;
	
}