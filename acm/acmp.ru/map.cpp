#include <iostream>
#include <cmath>
#include <set>
 
using namespace std;
 
set <int> a;
set <int> b;
set <int> c;
 
int main(){
    int n, m, x;
   
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> x;
        a.insert(x);
    }
 
    cin >> m;
    for( int i = 1; i <= m; i++){
        cin >> x;
        b.insert(x);
    }
 n
    set <int>::iterator it;
 
    for(it = a.begin(); it!=a.end(); it++){
        if (b.find(*it) == b.end())
            c.insert(*it);
    }
 
    for(it = b.begin(); it!=b.end(); it++){
        if (a.find(*it) == a.end())
            c.insert(*it);
    }
   
 
    cout << c.size() << endl;
    for(it = c.begin(); it != c.end(); it ++){
        cout << *it << " ";
    }
}