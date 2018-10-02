#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

stack<char>st;

int main(){
  int n;
  cin >> n;
  string s;
//  cin >> s;
  bool ok = true;

  for(int i = 0; i < n; i++){
    while(!st.empty()){
      st.pop();
    }
    cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(!st.empty()){
      if(s[i] == '(' && st.top() == ')') st.pop();
      else if(s[i] == '{' && st.top() == '}') st.pop();
      else if(s[i] == '[' && st.top() == ']') st.pop();
      else st.push(s[i]);
    }
    else{
      st.push(s[i]);
    }
  }

  if(st.size() == 0){
    cout <<"YES" <<endl;
  }
  else{
    cout <<"NO"<<endl;
  }
}
}