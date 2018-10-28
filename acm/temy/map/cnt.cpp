#include <iostream>
#include <map>

using namespace std;

map<string, int> m;

int main(){


    int n;
    cin >> n;
    string s;
    int x;

    for(int i = 0; i < n; i++){
    	cin >> s >> x;
    	m[s] = x;
    }
   

    pair<string, int> ans;
    int m;
    cin >> m;
    string s1, s2;
    for(int i = 0; i < m; i++){
    	cin >> s1 >> s2;
    	map<string,int>::iterator it;
    	for(it=m.begin(), it!=m.end();it++){
    		string key = it->first;
    		if(s1 == key){
    			ans.first = s2;
    			ans.second++;

    		}
    	}
    }

    cout << ans.second;

    
}