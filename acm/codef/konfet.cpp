#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;

	cin >> n;

	int m = n;

	int l[n], r[n], a[n];

	bool ok;

	for(int i = 0; i < n; i++){
		cin >> l[i];
	}

	for(int i = 0; i < n; i++){
		cin >> r[i];
	}

	vector<int> a;
	int ans[100100]

	for(int i = 0; i < n; i++){
      if(l[i] == 0 && r[i] == 0){
      	a.push_back(i);
      	ans[i] = n;
      }
      else{
      	ans[i] = -1;
      }
	}
    
    m--;

    while(a.size() > 0){
    	for(int i = 0; i < a.size(); i++){
    		for(int j = a[i] + 1; j < n - 1; j++){
    			if(ans[j] == -1){
    				if(--)
    				cout << "NO";
    				return 0;
    			}
    		}
    	}
    	for(int j = 0; j < a[i] - 1; j++){
    		if(ans[j] == -1){
    			if(--r[j] < 0){
    				cout << "NO";
    				return 0;
    			}
    		}
    	}
    }

    a.clear();

    for(int i = 0; i < n; i++){
    	if(ans[i] == -1  && l[i] == 0 && r[i] == 0){
    		a.push_back(i);
    		ans[i] = m;
    	}
    }
    m--;

	if(ok){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(i != j && a[j] > a[i]){
                  
				}
			}
		}
	}


}