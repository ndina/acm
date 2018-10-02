#include <iostream>
#include <cmath>
#include <queue>
#include <stdio.h>

using namespace std;

int main(){
    
    int t, x;
    cin  >> t;
    int n, m;
    string s;

	for(int i = 0; i < t; i++){
    // cout << "Case: " << i + 1 << endl;
		printf("Case %d:\n", i + 1);
     cin >> n >> m;
     deque<int> q;
     for(int j = 0; j < m; j++){
     	cin >> s;
     	
     	if(s == "popLeft"){
          if(q.empty()){
          	cout <<"The queue is empty"<< endl;
          }
          else{
          	cout <<"Popped from left: " <<q.front()<<endl;
          	q.pop_front();
          }
     	}
     	if(s == "popRight"){
          if(q.empty()){
          	cout <<"The queue is empty"<< endl;
          }
          else{
          	cout <<"Popped from right: " << q.back() << endl;
          	q.pop_back();
          }
     	}

     	if(s == "pushLeft"){
     		cin >> x;
     		if(q.size() == n){
     			cout << "The queue is full" << endl;
     		}
     		else {
     			q.push_front(x);
     			//cout << q.size() << endl;
     			cout <<"Pushed in left: " << x << endl;
     		}
     	}

     	if(s == "pushRight"){
     		cin >> x;
     		if(q.size() == n){
     			cout << "The queue is full" << endl;
     		}
     		else {
     			q.push_back(x);
     		//	cout << q.size() << endl;
     			cout <<"Pushed in right: " << x << endl;
     		}
     	}
      }
   	}
   	return 0;
}