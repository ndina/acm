#include <iostream>
#include <cstring>
#include<stdio.h>
#include<string.h>

using namespace std;


int a[105][105];
int mini[105];
bool vis[105];
int n;


int findMini(){
	int mini1 = 100000;
	int ind;
	for(int i = 1; i <= n; i++){
		if(vis[i] == false && mini[i] < mini1){
			mini1 = mini[i];
			ind = i;
		}
	}

	return ind;
}


int main(){
	
    int sum;
	
    while(scanf("%d",&n)!=EOF){
		sum = 0;
		memset(vis, false, sizeof(vis));
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				 cin >> a[i][j];
			}
		}
		for(int i = 1; i <= n; i++)	mini[i] = a[1][i];
		vis[1] = true;
		
		for(int i = 1; i < n; i++){
			int ind = findMini();
			vis[ind] = true;
			sum += mini[ind];

			cout << sum << " ";

			for(int j = 1; j <= n; j++){
				if(a[ind][j] < mini[j] ){
					mini[j] = a[ind][j];
				}
			}

		}
		printf("%d\n",sum);

	}

	return 0;



}