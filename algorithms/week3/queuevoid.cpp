#include <iostream>
#include <string>
using namespace std;
 
struct queue{
    int storage[100000];
    int start;
    int finish;
    queue(){
        start = 0;
        finish = 0;
    }
 
    void push(int n){
        storage[finish] = n;
        finish++;
    }
 
    int pop(){
        int a = storage[start];
        start++;
        return a;
    }
 
    int front(){
        return storage[start];
    }
 
    int size(){
        return finish - start;
    }
 
    string clear(){
        finish = 0;
        start = 0;
        return "ok";
    }
 
    string exit(){
        return "bye";
    }
};
 
int main() {
    string a;
    queue x;
    while(cin >> a){
        if(a == "push"){
            int n;
            cin >> n;
            x.push(n);
            cout << "ok" << endl;
        }
        if(a == "pop"){
            if(x.size()!=0){
            cout << x.pop() << endl;
        }
        else{
            cout << "error" << endl;
        }
        }
        if(a == "front"){
            if(x.size()!= 0){
              cout << x.front() << endl;
 
            }
            else{
                cout << "error" << endl;
            }
        }
        if(a == "size"){
            cout << x.size() << endl;
        }
        if(a == "clear"){
            cout << x.clear() << endl;
        }
        if(a == "exit"){
            cout << x.exit() << endl;
            return 0;
        }
    }
    return 0;
}