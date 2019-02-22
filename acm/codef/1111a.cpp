#include <bits/stdc++.h>

#define ll long long
#define pb push_back


using namespace std;

int main(){
	string s, t;
	cin >> s >> t;
	int cnt = 0;

    if(s.size() != t.size()){
    	cout << "No";
    	return 0;
    }
    else{
    	for(int i = 0; i < s.size(); i++){
    		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
    			if(t[i] == 'a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u'){
    				cnt++;
    			}
    		}
    		else{
      			if(t[i] != 'a' && t[i] != 'e' && t[i] != 'i' && t[i] != 'o' && t[i] != 'u'){
    				cnt++;
    			}  			
    		}
    	}										
    }

    if(cnt == s.size()){
    	cout << "Yes";
    }
    else{
    	cout << "No";
    }

    return 0;
}