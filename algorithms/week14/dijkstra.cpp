#include <iostream>

using namespace std;

bool used[1000];
int d[1000];
int a[1000][1000];
int c[1000]; 

int main(){
	//read matrix3333333333333333333
	int n;
	for(int i = 0; i < n; i ++){
		int k = -1;
		for(int j = 0; j < n; j++){
			if(!used[j] && (k == -1 || d[k] > d[j])){
				k = j;
			}
                                                                                                                 		}
		for(int j = 0; j < n; j++){
			if( d[k] > d[k] + a[k][j] && a[k][j] > 0){
				d[j] = a[k][j]
				c[j] = k;
			}
		}
	}

	// for(int i = 0; i < n; i++){
	// 	cout << c[k] << " ";
	// }

	return 0;
}