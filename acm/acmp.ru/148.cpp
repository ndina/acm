#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define l long

l gcd(l a, l b){
	if(a == 0){
		return b;
	}
	else if(b == 0){
		return a;
	}
	else{
		if(a >= b){
			return gcd(b, a % b);
		}
		else{
			return gcd(a, b % a);
		}
	}
}

int main(){
	l a,b;

	cin >> a >> b;

	cout << gcd(a, b);
}

// -----------------------------------
// long gcd(long a, long b){
// 	long nod;
// 	for(int i = a; i > 0; i--){
// 		if(a % i == 0 && b % i == 0){
// 			nod = i;
// 			break;
// 		}
// 	}

// 	return nod;
// }

// int main(){
// 	long a, b;
// 	cin >> a >> b;

// 	cout << gcd(a, b);
// }
// ------------------------------

// #define pb push_back

// int main(){
// 	int a, b;

// 	cin >> a >> b;

// 	vector<int>v1,v2,v3;

// 	for(int i = 1; i <= a; i++){
// 		if(a % i == 0){
// 			v1.pb(i);
// 		}
// 	}

// 	for(int i = 1; i <= b; i++){
// 		if(b % i == 0){
// 			v1.pb(i);
// 		}
// 	}

// 	sort(v1.rbegin(), v2.rend());

// 	for(int i = 0; i < v1.size(); i++){
// 		cout << v1[i] << " ";
// 		if(v1[i] == v1[i+1]){
// 			v2.pb(v1[i]);
// 		}
// 	}

// 	// sort(v2.begin(), v2.end());

// 	// cout << v2[v2.size() - 1];

// }
