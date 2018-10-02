#include <iostream>
#include <queue>
#include <cstdio>


using namespace std;

int p, c;

deque<int> d;
deque<int> buf;

void solve(int test){
 cin >> p >> c; // 3  6
 string cmd;

 if(!p && !c)
 	exit(0);
cout << "Case "<< test << ":\n";

for(int i = 1; i <= p && i <= 1000; i++){
	d.push_back(i); // 1 2 3
}

for(int i = 1; i <= c; i++){
	cin >> cmd;
	if(cmd == "N") {
		int cur = d.front(); // 1
		cout << cur << "\n";
		d.pop_front(); // 2  
		d.push_back(cur); // 2 1
	}
	else if (cmd == "E"){
        int x;
        cin >> x; //1
        while(!d.empty()){
        	int cur = d.front(); // 2
        	d.pop_front(); // 1
        	if(cur != x){
        		buf.push_back(cur);
        	}
        }
        d = buf; // now buf contains all elements of d except x
        d.push_front(x);
	}
}

}

int main(){
 int test = 0;

 while(++test){
 	solve(test);
 }
}