#include <iostream>

using namespace std;

bool used[1000];
int d[1000];
int a[1000][1000];
int c[1000]; 
int mini = 19919;

int main(){
	//read matrix
    int test;
    cin >> test;
    int n, m;
    while(test--){
    	cin >> n >> m;
    	for(int i = 0; i < n; i++){
    		for(int j = 0; j < 2; j++){
    			cin >> a[i][j] >> d[i];
    		}
    	}

        for(int i = 0; i < n; i++){
        	int k = -1;
        	for(int j = 0; j < n; j++){
        		if(used[j] && (k == - 1 || d[k] > d[j])){
        			k = j;
        		}
        		used[k] = true;
        	}
        	for(int j = 0; j < n; j++){
				if(!used[j] && d[k] > a[k][j] && a[k][j] > 0){
					d[j] = a[k][j];
					mini = min(mini, d[j]);
				}
			}
        }
        cout << mini;



    }

  

	return 0;
}