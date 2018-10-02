#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    int cnt = 0;

    while(cin >> n){
        if(n >= 0){
            cnt++;
            //continue;
        }
        else{
            break;
        }
    }
    cout << cnt;
    return 0;
}