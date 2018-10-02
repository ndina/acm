#include <iostream>
#include <stack>
#include <vector>

using namespace std;
struct queue{
  int storage[10000];
  int start;
  queue(){
    start = 0;
  }
  int front(){
    return storage[start];
  }
};

std::vector<string> v;

int main(){


 // stack <int> st;
  string s, a;
  queue x;
//  a = ok;
  int n;
  while(cin >> s){
  	if(s == "push"){
  		cin >> n;
  		x.push(n);
  		cout << "ok";
  		cout << endl;
  		//v.push_back(a);
  	}
  	if(s == "pop"){
      if(x.size() != 0){
  		cout << x.top();
  		cout << endl;
  		x.pop();
      }
      else{
        cout << "error" << endl;
      }
  	}
  	if(s == "back"){
      if(x.size() != 0){
          cout << x.top();
          cout << endl;
      }
      else{
        cout << "error" << endl;
      }
  	
  	}
  	if(s == "size"){
  		cout << x.size() << endl;
  	}
  	if(s == "clear"){
      while(!x.empty()){
      	x.pop();
      }
   	cout << "ok" << endl;

  	}
   if(s == "front"){
     // for(int i = 0; i < st.size(); i++){
         cout << x.front()<< endl;
      //}
    //  cout << st[0] << endl;
    }
  
  	if(s == "exit"){
  		cout << "bye";
  		return 0;
  	}
  }
  return 0;
}