#include <iostream>
#include <deque>

using namespace std;
deque<int>d;

void solve(int test){
  int n, x, y, sz = 0;
  string s;
  int com;
  cin >> n;
  for(int i = 0; i < n; i++){
  	cin >> x >> y;
    for(int j = 0; j < y; j++){
      cin >> s;
      if(s == "pushLeft"){
      	cin >> com;
      	if(sz <= x){
      	d.push_back(com);
      	cout <<"Pushed in left " << com << endl;
      	sz += com;
      	}
      
      }
      if(s == "pushRight"){
      	cin >> com;
      	if(sz <= x){
          	d.push_front(com);
          	cout << "Pushed in right " << com << endl;
          	sz+=com;
      	}

      

      }
    }
  }
}

int main(){
	int test = 0;
	cin >> test;
	while(++test){
		solve(test);
	}
}
