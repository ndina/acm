#include <bits/stdc++.h>

using namespace std;

stack<char>st;

int main(){

	string s;
	string ans = "";
	cin >> s;

	for(int i = 0; i < s.size(); i+=2){
		if(st.empty()){
			st.push(s[i]);
            ans += '[';
		}
		else if(st.top() == '<' && s[i] == '>'){
			st.pop();
			ans+=']';
		}
		else{
		    st.push(s[i]);
		    ans+='[';
		}
	}

	if(st.empty()){
		cout << ans;
	}
	else{
		cout << "Keine Loesung";
	}
    

	return 0;
}