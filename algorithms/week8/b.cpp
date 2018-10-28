#include <bits/stdc++.h>
using namespace std;

void merge(int l, int r, int a[]){
	int i = 0, j = 0, k = 0;
	int m = (l + r) / 2;
	int nL = m - l + 1;
	int nR = r - m;

	while(i < nL && j < nR){
		if(l[i] <= r[j]){
			a[k] = l[i];
			k++;
			i++;
		}
		else if(l[i] > r[j]){
			a[k] = r[i];
			k++;
			j++;
		}
	}

	while(i < nL){
		a[k] = l[i];
		i++;
		k++;
	}
	while(j < nR){
		a[k] = r[i];
		j++;
		k++;
	}
}

void mergeSort(int a[]){
	int n;
	if(n  < 2) return;
	mid = n /2;
	int nl = m - l + 1;
	int nr = r - m;

	int L[n1], R[n2];

	for(int i = 0; i < mid -1; i++){
		L[i] = a[i];
	}
	for(int i = mid; i < n - 1; i++){
		R[i - mid] = a[i];
	}
	mergeSort(L);
	mergeSort(R);
	merge(L, R, a[]);
}

int main(){
	int a[1000]
	while(cin >> a[i]){
		mergeSort(a[i]);
		i++;
	}

	



}

