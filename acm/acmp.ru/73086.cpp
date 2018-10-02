#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;

    while(cin >> n){
        if(n >= 0){
            continue;
        }
        else{
            cout <<"The end of the program";
            break;
        }
    }
    return 0;
}