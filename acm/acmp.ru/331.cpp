#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    int a, b;
    char ch;
    int c ,d;
 
    cin >> a >> ch >> b;
 
    cin >> c >> d;
 
    if(b + d >= 60){
    	c+=(b + d) / 60;
        d = (b + d) % 60;
    }
    else{
        d += b;
    }
 
    if(c > 24){
        c %= 24;
    }
 
    c = a + c;
 
    //cout << c << endl;
 
    if(c == 24){
        if(d < 10){
            cout << "00" << ch << 0<<d;
 
        }
        else{
        cout << "00" << ch << d;}
 
        //return 0;
    }
    else if(c > 24){
        c%=24;
        if(c < 10){
            if(d < 10){
           cout << 0<<c << ch << 0 << d;
 
            }
            else{
            cout << 0<<c << ch << d;}
        }
        else{
            if(d < 10){
                cout << c << ch << 0 << d;
            }
            else{
            cout << c <<ch<<d;}
        }
    }
    else if(c < 24){
        if(c < 10){
            if(d < 10){
                cout << 0 << c << ch << 0 << d;
            }
            else{
                cout << 0<<c<<ch<<d;
 
            }
        }
        else{
 
            if(d < 10){
                cout << c << ch << 0 << d;
            }
            else{           cout <<c<<ch<<d;
            }
        }
    }
 
 
}