#include <iostream>
#include <queue>

using namespace std;

string solve(int n){
	cin >> n;
	int cnt = 0;

	deque<int> d;
	deque <int> buf;
	deque <int> trash;
	deque <int> perf;

	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		d.push_back(x);
		while(i <= n - 1){
			buf.push_back(x);
		}
		if(d.front() > buf.front()){
          trash.push_back(d.front());
          cnt++;
          d.pop_front();
		  buf.pop_front();
		}
		else{
          perf.push_back(d.front());
          d.pop_front();
          perf.push_back(d.front());
          d.pop_front();
		}
		if(trash.front() < d.front()){
			perf.push_back(trash.front());
		}
		/*d.pop_front();
		buf.pop_front();
		*/
	}
	//int sz = perf.size();
	if(cnt > 1){
		cout <<"no";
	}
	else if(perf.size() == n){
		cout << "yes";
	}
}

int main(){
	
}