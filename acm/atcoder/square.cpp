#include <bits/stdc++.h>
using namespace std;
 
string s;
int x11, y11, x22, y22, x33, y33, x44, y44;
      
int main() {  
    ios::sync_with_stdio(false);
    cin >> x11 >> y11 >> x22 >> y22;
 
    int dx = x22 - x11;
    int dy = y22 - y11;
 
    x33 = x22 - dy;
    y33 = y22 + dx;
 
    x44 = x11 - dy;
    y44 = y11 + dx;
 
    cout << x33 << " " << y33 << " " << x44 << " " << y44 << endl;
  
    return 0;  
}  