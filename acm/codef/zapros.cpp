#include <bits/stdc++.h>

using namespace std;


vector<int> l, r;

int main(){
    
    int n;
    char c;
    int x;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
    	cin >> c ;
    	if(c == 'L'){
    		cin >> a[i];
    		l.push_back(a[i]);
    	}
    	if(c == 'R'){
    		cin >> b[i];
    		r.push_back(b[i]);
    	}
    	if(c == '?'){
    		cin >> x;
    		for(int i = 0; i < l.size(); i++){
    			if(x == a[i]){
    				if(l.size() - 1 - i <= r.size() + i){
    					cout << l.size() - 1 - i << endl;
    				}
    				else{
    					cout << r.size() + i << endl;
    				}

    			}
    		}
    		for(int i = 0; i < r.size(); i++){
    			if(x == b[i]){
    				if(r.size() - 1 - i<= l.size() + i){
    					cout << r.size() - 1 - i << endl; 
    				}
    				else{
    					cout << l.size() + i << endl;
    				}
    			}
    		}

    	}
    } 

    cout << endl;
    for(int i = 0; i < l.size();i++){
    	cout << a[i] << " ";
    }
    cout << endl;

    for(int i = 0; i < r.size(); i++){
    	cout << b[i] << " "; 
    }

	return 0;
}