#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
   
   string name;

   getline(cin, name);

   int n = 3;

   string s[n];

   for(int i = 0; i < n; i++){
   	cin >> s[i];
   }

   sort(s, s + n);

   cout << name << ": ";

   for(int i = 0; i < n - 1; i++){
   	cout << s[i] <<", ";
   } 

   cout << s[n - 1];
}