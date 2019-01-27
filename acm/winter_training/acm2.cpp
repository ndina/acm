#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){

	map<char, int> m;
	string s;
	char c;
    
   while(getline(cin, s)){
   	m.clear();
   	for(int i = 0; i < s.size(); i++){
   		c = s[i];
      	m[c]++;

   	}
    for(int i = 0; i < 26; i++){
   	cout << char(i + 'a') << ":" << m[char(i + 'a')] <<endl;
   }
   cout << endl;

   }


   return 0;


}