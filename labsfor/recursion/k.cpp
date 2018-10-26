#include <iostream>
using namespace std;

int rec(string s, int i, char ans){
    if(i == s.size())return ans;   
    ans = max(ans, s[i]);
    return rec(s, i+1, ans);
}
int main(){
    string s;
    cin >> s;
    
    cout<<char(rec(s, 0, '0'));
    
    
}