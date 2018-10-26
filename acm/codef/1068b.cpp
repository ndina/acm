#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<int>s;

int main() {
	    ll b;
	    cin >> b;
        for(int i = 1; i * i <= b; i++){
        	if(b % i == 0){
        		s.insert(i);
        		s.insert(b/i);
        	}
        }


        set<int>::iterator it;

         cout << s.size();
}
