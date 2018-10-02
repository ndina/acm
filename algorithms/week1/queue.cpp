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
 
    void push_back(int n){
        storage[finish] = n;
        finish++;
    }
 
    /*int pop(){
        int a = storage[start];
        start++;
        return a;
    }
    */
    int  pop_front(){
        int a = storage[finish];
        finish++;
        return a;
    }

    int front(){
        return storage[start];
    }
    void push_front(int n){
        storage[start] = n;
        start++;
       // return storage[start];
    }
 
    int size(){
        return finish - start;
    }
    int back(){
        return storage[finish];
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
        if(a == "push_back"){
            int n;
            cin >> n;
            x.push_back(n);
            cout << "ok" << endl;
        }
        if(a == "pop_front"){
            x.pop_front();
        }
        if(a == "push_front"){
            int n;
            cin >> n;
            x.push_front(n);
            cout << "ok" << "\n";
        }
        if(a == "front"){   
          cout << x.front() << endl;
        }
        if(a == "size"){
            cout << x.size() << endl;
        }
        if(a == "clear"){
            cout << x.clear() << endl;
        }
        if(a == "back"){
            cout << x.back() << "\n";
        }
        if(a == "exit"){
            cout << x.exit() << endl;
            return 0;
        }
    }
    return 0;
}