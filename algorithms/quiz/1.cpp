#include<bitst/stdc++.h>

using namespace std;

stack<char> st;

string skobka(string s){
	bool ok = true;
	for(int i = 0; i < s.size(); i++){
     if(s[i] == '[' || s[i] == '{' || s[i] == '('){
     	st.push(s[i]);
     }
     else{
  		if(st.empty()){
  			ok = false;
  			break;
  		}
  		if(s[i] == ']' && st.top() != '['){
  			ok = false;
  			break;
  		}
  		if(s[i] == '}' && st.top() != '{'){
  			ok = false;
  			break;
  		}
  		if(s[i] == ')' && st.top() != '('){
  			ok = false;
  			break;
  		}
  		st.pop();
  	}
  }
  if(st.size() > 0 && ok == false){
  	 return "NO";
  }
  else{
    	return "YES";
  }
  
}

int main(){

	int n;
	cin >> n;
	string s;

	for(int i = 0; i < n; i++){
		cin >> s;
	cout << skobka(s) << endl;
	}
    
   /* for(int i = 0; i < n; i++){
    	cout << skobka(s) << endl;
    }
    */
	

	//return 0;
 
}