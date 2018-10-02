#include <iostream>
#include <stack>
#include <vector>
 
using namespace std;
 
std::vector<string> v;
 
int main(){
 
 
  stack <int> st;
  string s, a;
//  a = ok;
  int n;
  while(cin >> s){
    if(s == "push"){
        cin >> n;
        st.push(n);
        cout << "ok";
        cout << endl;
        //v.push_back(a);
    }
    if(s == "pop"){
      if(st.size() != 0){
        cout << st.top();
        cout << endl;
        st.pop();
      }
      else{
        cout << "error" << endl;
      }
    }
    if(s == "back"){
      if(st.size() != 0){
          cout << st.top();
          cout << endl;
      }
      else{
        cout << "error" << endl;
      }
   
    }
    if(s == "size"){
        cout << st.size() << endl;
    }
    if(s == "clear"){
      while(!st.empty()){
        st.pop();
      }
    cout << "ok" << endl;
 
    }
    if(s == "exit"){
        cout << "bye";
        return 0;
    }
  }
  return 0;
}