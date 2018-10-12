#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
// using namespace std;

// string s;

// vector <string> v;



// int main(){
	
	
// 	cin >> s;

// 	for(int i = 0; i < s.size(); i += 2){
//        v.push_back(s.substr(i,1));
// 	}

// 	sort(v.begin(), v.end());
// 	cout  << v[0];

// 	for(int i = 1; i < s.size(); i ++)
// 		cout << '+' << v[i];
// 	cout << "\n";
// 	return 0;
// }

// #include<bits/stdc++.h>
using namespace std;
string s;
vector<string> ans;

int main(){
	cin>>s;
	for(int i=0;i<s.length();i+=2){
		ans.push_back(s.substr(i,1));
	}
	sort(ans.begin(),ans.end());
	cout<<ans[0];
	for(int i=1;i<ans.size();i++) cout<<"+"<<ans[i];
	cout<<"\n";
	return 0;
}