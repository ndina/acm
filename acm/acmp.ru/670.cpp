#include <iostream>
#include <cmath>
#include <vector>
#include <set>

using namespace std;

vector<int> v, v2;
set<int>s;
bool ok(int n){
	int sum = 0, cnt = 0;
	while(n > 0){
     int a = n % 10;
     v.push_back(a);
    // s.insert(a);
     n /= 10;
     sum++;
	}
	//set<int>:: iterator it;
	/*for(it = s.begin(); it != s.end(); it++){
		if()
	}
	*/
	//if(v.size() == s.size())
	for(int i = 0; i <v.size(); i++){
		for(int j = 1; j < v.size(); j++){
			if(v[i] != v[j]){
				cnt++;
			}
		}
	}
	if(sum == cnt)
	 return true;
	else
	 return false; 

}

int main(){
	int n, cnt = 0, t = 1;
	cin >> n;
	while(cnt<n){
      if(ok(t) == true){
      	v2.push_back(t);
      	cnt++;
      	t++;
      }
      else{
      	continue;
      }
	}
     /*for(int i = 0; i < v2.size(); i++){
     	cout << v2[i] << " ";
     }
     */
	cout  << v2[v2.size() - 1];
	return 0;

}