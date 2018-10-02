#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
    char c;
 
    int cnt1 = 0, cnt2 = 0, k;
 
    string s;
    cin >> s;
 
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
 
    if(cnt2 >= 1){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
 
 
}