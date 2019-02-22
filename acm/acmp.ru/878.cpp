#include <bits/stdc++.h>

using namespace std;
vector<pair<char,int> >v;
#define pb push_back

bool sortby(const pair<char, int> &a,const pair<char, int> &b){
	return (a.first < b.first);
}
int main(){
 string s;
 cin >> s;
 int sum = 0;
 for(int i = 0; i < s.size(); i++){
 	v.pb(make_pair(s[i], i));
 	sum += int(s[i]);
 }
 bool ok = true;

  for(int i = 0; i < v.size(); i++){
 	for(int j = i + 1; j < v.size(); j++){
 		if(v[i].first == v[j].first && v[i].first != 'Z'){
 			ok = false;
 		}
 	}
 }

 sort(v.begin(), v.end(), sortby);


 if(ok){
 	cout << "YES" <<endl;
 	for(int i = 0; i < v.size(); i++){
 	  cout << v[i].second + 1<< " ";
     }
 }
 else{
 	cout << "NO";
 }

 return 0;


} 
