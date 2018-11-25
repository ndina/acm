#include <bits/stdc++.h>

using namespace std;

set<string>st;

int main(){

	string s;


	while(cin >> s){
		st.insert(s);
	}
    
    if(st.size()  <= 7){
    	cout <<"Not good";

    }
    else{
    	cout << "Good";
    }
	
	return 0;

}