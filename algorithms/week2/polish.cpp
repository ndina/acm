#include <iostream>
#include <stack>
#include <algorithm>


using namespace std;

stack<int> st;
string s;

int get(){
	int x = st.top();
	st.pop();
	return x;
}

void solve(int test){
	while(cin >> s){
		if(s == "+"){
			int x = get();
			int y = get();
			st.push(x + y);
		}
		else if(s == "-"){
			int x = get();
			int y = get();
			st.push(x - y);
		}
		else if(s == "*"){
			int x = get();
			int y = get();
			st.push(x * y);

		}
		else{
			st.push(atoi(s.c_str()));
		}

	}
	cout << get;
	exit(0);
}

int main(){
	int test = 0;
	while(++test){
		solve(test);
	}

}