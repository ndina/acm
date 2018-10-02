#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main(){
    
   int n,cnt = 1;
   cin >> n;
   string s[n + 10];
   set<string>a;

   for(int i = 0; i < n; i++){
   	cin >> s[i];
   	a.insert(s[i]);
   }

   for(int i = 0; i < n; i++){
   	if(s[i][s[i].size() - 1] == s[i + 1][0]){
   		cnt++;
   	}
   }


   if(a.size() == n && cnt == n){
   	cout <<"Yes";
   }
   else{
   	cout << "No";
   }
	return 0;

}