#include <iostream>
#include <queue>
#include <algorithm>


using namespace std;

deque<int>d;

int main(){

	int n, x;
	cin >> n;
	string s;

	int ok = 0;
	for(int i = 0; i < n; i++){
       cin >> s;

       if(s=="reverse")
       {
       	 if(ok==1) ok=0;
       	 else ok=1;
       	 continue;
       }
       if(ok==0){
       if(s == "push_back" ){
       	cin >> x;
       	d.push_back(x);
       }
       if(s == "push_front" ){
       	cin >> x;
       	d.push_front(x);
       }
       if(s == "front"){
       	if(d.empty()){
       		cout<<";("<<endl;
       	}
       	else{	
       		cout << d.front() << endl;
       	    d.pop_front();

       	}
       }
       if(s == "back"){
       	if(d.empty()){
       		cout<<";("<<endl;
       	}
       	else{
       		cout << d.back() << endl;
       	    d.pop_back();

       	}
    
       }
       }
       else
       {
       		if(s == "push_back" ){
       	cin >> x;
       	d.push_front(x);
       }
       if(s == "push_front" ){
       	cin >> x;
       	d.push_back(x);
       }
       if(s == "front"){
       	if(d.empty()){
       		cout<<";("<<endl;
       	}
       	else{	
       		cout << d.back() << endl;
       	    d.pop_back();

       	}
       }
       if(s == "back"){
       	if(d.empty()){
       		cout<<";("<<endl;
       	}
       	else{
       		cout << d.front() << endl;
       	    d.pop_front();

       	}
    
       }


       }

	}

	return 0;
}