#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

string bin_search(int *a, int n, int x){
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] < x){
			l = m + 1;
		}
		else if(a[m] > x){
			r = m - 1;
		}
		else{
			return "YES";
		}
	}
	return "NO";
}
int main(){
  int n, m;

  cin >> n >> m;

  int a[n], b[m];

  for(int i = 0; i < n; i++){
  	cin >> a[i];
  }
  for(int  i = 0; i < m; i++){
  	cin >> b[i];
  }
  for(int i = 0; i < m; i++){
  	cout <<bin_search(a, n, b[i]) << endl;
  }
}