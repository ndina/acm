#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    //int a[] = {1, 2, 4, 5, 7, 23, 40, 100, 101};
    int a[] = {1};
    
    int l = 0;
    int r = 0;

    int x;
    cin >> x;


    bool ok = false;

    while(l <= r){
        int m = (l + r)/2;
        if(a[m] < x){
            l = m + 1;
        }else if(a[m] > x){
            r = m - 1;
        }else {
            ok = true;
            break;
        }
    }

    if(ok){
        cout << "found!" << endl;
    }else{
        cout << "not found!" << endl;
    }

    return 0;
}