#include <iostream>
#include <vector>
using namespace std;

vector<int> g[101010];
bool used[10101];
int mini = 10101;
int a[1010][1010];
int sum = 0;
int n;

void dfs(int v){
	used[v] = true;
    int j = 0;
	for(int i = 0; i < n; i++){
		if(a[v][j]  < mini){
			mini = a[v][j];
			j++;
		}
		sum += mini;
		if(mini = a[v][j]){
			dfs(j);
		}
	}
}

int main(){

	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		dfs(i);
	}

   cout << sum;
   return 0;


}