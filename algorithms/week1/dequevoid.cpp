#include <iostream>
#include <cmath>
#include <queue>
 
using namespace std;
 
deque<int> d;
 
int main(){
 int n;
 string s;
 
 while(cin >> s){
    if(s == "push_front"){
        cin >> n;
        d.push_front(n);
        cout <<"ok" <<"\n";
    }
    if(s == "push_back"){
        cin >> n;
        d.push_back(n);
        cout << "ok" << "\n";
    }
    if(s == "pop_front"){
        if(d.size() == 0){
            cout << "error" << "\n";
        }
        else{
            cout << d.front() << "\n";
            d.pop_front();
        }
    }
    if(s == "pop_back"){
        cout << d.back() << "\n";
        d.pop_back();
    }
    if(s == "front"){
        cout << d.front() << "\n";
    }
    if(s == "back"){
        cout << d.back() << "\n";
    }
 
    if(s == "size"){
        cout << d.size() << "\n";
    }
    if(s == "clear"){
        d.clear();
        cout << "ok" << "\n";
    }
    if(s == "exit"){
        cout << "bye";
        return 0;
    }
 }
}