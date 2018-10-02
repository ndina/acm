#include <iostream>
#include <stack>

using namespace std;

string skobka(string s) {
    stack<char> st;  
    
    for (int i = 0; i < s.size(); i++) {
        switch (s[i]) {
            case '{':
            case '(':
            case '[':
                st.push(s[i]);
                break;
            case '}':
                if (st.empty() || (st.top() != '{')) {
                    return "NO";
                }
                st.pop();
                break;
            case ')':
                if (st.empty() || (st.top() != '(')) {
                    return "NO";
                }
                st.pop();
                break;
            case ']':
                if (st.empty() || (st.top() != '[')) {
                    return "NO";
                }
                st.pop();
                break;
    if(st.empty()){
        return "YES";
    }
    else{
        return "NO";
    }
}


int main(){
    int n;
       string s;
    cin >> n;
    for(int i= 0; i< n; i++){
     
        cin >> s;
        cout << skobka(s) << endl;
    }
    return 0;
}
    
    