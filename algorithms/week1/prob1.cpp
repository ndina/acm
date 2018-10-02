#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

queue<int> team_q[1000];
queue<queue<int>*> teams;
int n, x, mate, team[10000];


void print(int test){
	cin >> n;

	if(!n)
		exit(0);

	cout << "Scenario #" << test << "\n";

	for(int i = 0; i < n; i++){
		cin >> x;
		for(int j = 0; j < x; i++){
			cin >>mate;
			team[mate] = i;
		}
	}

	string s;

	while(cin >> s){
		if(s == "STOP"){
			return;
		}
		if(s == "ENQUEUE"){
			cin >> mate;
			int m = team[mate];
			if(team_q[m].empty()){
				teams.push(&team_q[m]);
			}
			team_q[m].push(mate);
		}
		else {
			cout << (*teams.front()).front() << "\n";
			(*teams.front()).pop();
			if((*teams.front()).empty()) {
				teams.pop();
			}
		}
	}
}
int main(){
	int test = 0;
	while(++test){
		print(test);
	}
}