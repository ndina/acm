#include <bits/stdc++.h>

using namespace std;

string s;
int priority[300];
stack<char> op;
stack<int> num;

void do_operation(){
	char cur_op = op.top();
	op.pop();
	int x = num.top();
	num.pop();
	int y = num.top();
	num.pop();
	int res = 0;
	switch(cur_op){
		case '+': res = x + y; break;
		case '-': res = y - x; break;
		case '*': res = x * y; break;
	}
	num.push(res);
}

int main(){

	priority['('] = 0;
	priority['+'] = 1;
	priority['-'] = 1;
	priority['*'] = 2;

	cin >> s;

	for(int ch = 0; ch < s.size(); ch++){
		if(s[ch] == '+' || s[ch] == '-' || s[ch] == '*'){
			while(!op.empty() && priority[op.top()] >= priority[s[ch]]){
				do_operation();
			}
			op.push(s[ch]);
		}
		else if(s[ch] == '('){
			op.push(s[ch]);
		}
		else if(s[ch] == ')'){

			while(op.top()!= '('){

				do_operation();
			}
			op.pop();
		}
		else{
			int number = s[ch] - '0';
			num.push(number);
		}
	}
	while(!op.empty()){
		do_operation();
	}

	cout << num.top();

	return 0;
}