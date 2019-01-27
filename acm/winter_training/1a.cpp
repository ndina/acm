#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;
#define pb push_back
vector<int>v1, v2;


int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
	int n;
	cin >> n;
	string s;

	cin >> s;

	for(int i = 1; i <= s.size() / 2; i++){
		if(s[i - 1] == 'L'){
			cout << i << ' ' << n/2 + i << '\n';

		}
		else{// if(s[i - 1] == 'R'){
			cout << n / 2 + i << ' ' << i << '\n';
		}
	}





// 	// for(int i = 0; i < v1.size(); i++){
//  //        cout << v1[i] << " ";
// 	// }
// 	// cout << endl;

// 	// for(int i = 0; i < v2.size(); i++){
//  //        cout << v2[i] << " ";
// 	// }
	return 0;
}
