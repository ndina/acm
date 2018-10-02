#include <iostream>
#include <stack>

using namespace std;

bool correct(string s){
	stack<char> st;
	for(int i = 0;  i < s.size(); i++){
		if(s[i] == '(' || s[i] == '{' || s[i] == '['){
			st.push(s[i]);
		}
		else{
			if(st.empty()) return false;
			if(s[i] == ')' && st.top() != '(') return false;
            if(s[i] == '}' && st.top() != '{') return false;
            if(s[i] == ']' && st.top() != '[') return false;
            st.pop();
		}
	}
	if(st.empty())
		return true;
	return false;
}

int main(){

    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
    	cin >> s;
    	if(correct(s)){
    		cout <<"YES\n";
    	}
    	else{
    		cout <<"NO\n";
    	}
    }
	return 0;
}