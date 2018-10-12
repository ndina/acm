#include <iostream>
#include <cmath>
using namespace std;

int binary_search(int *a, int n, int k) {
    int left = 0;
    int right = n;
    while (left < right) {
        int mid = (left + right) / 2;
        if (a[mid] < k)
            left = mid + 1;
        else 
            right = mid;
    }
    return right;
}

int a[100000],b[100000];

int main(){
	int n,m,k;
	
	cin >> n;

	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i<= n; i++){
		b[i] = b[i-1] + a[i];
	}
	cin >> m;
	for(int i = 1; i <= m; i++){
		cin >> k;
		cout << binary_search(b,n,k) << " ";
	}
	return 0;
}