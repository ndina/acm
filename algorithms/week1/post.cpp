#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

stack <int> st;

int main(){
 char c;
 long res = 0;
 while(cin >> c){
 	if(c >= 0 && c <= 9){
 		st.push(c);
 	}
 	else if(c =='+' || c == '-' || c == '*'){
 		if(c == '+'){
 			res +=st.top();
 			st.pop();
 			res+=st.top();
 			st.pop();
 		}
 	}
 }
 cout << res;
}