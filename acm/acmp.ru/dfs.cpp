#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

void dfs(){
	stack<int> s;
	s.push(start);
	while(!s.empty()){
		int v = s.top();
		s.pop();
		for(int i = 0; i < edges[v].size(); ++i){
			if(mark[edges[v][i]] == 0){
				s.push(edges[v][i]);
				mark[edges[v][i]] = 1;
			}
		}
	}
}

int main(){

}