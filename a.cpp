#include <iostream>

using namespace std;

int cnt = 0;

void merge(int *a, int l, int m, int r){
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for(int i = 0; i < n1; i++){
		L[i] = a[l + i];
	}
	for(int j = 0; j < n2; j++){
		R[j] = a[m + 1 + j];
	}

	i = 0;
	j = 0;
	k = l;

	while(i < n1 && j < n2){
		if(L[i] <= R[i]){
			a[k] = L[i];
			i++;
			cnt++;
		}
		else{
			a[k] = R[j];
			j++;
			cnt++;
		}
		k++;
	}

	while(i < n1){
		a[k] = L[i];
		k++;
		i++;
		cnt++;
	}

	while(j < n2){
		a[k] = R[j];
		k++;
		j++;
		cnt++;

	}
}

void mergeSort(int *a, int l, int r){
	if(l < r){
		int m = (l + r) / 2;
		mergeSort(a, l, m);
		mergeSort(a, m + 1, r);
		merge(a, l, m , r);
	}
}

int main(){

	int i = 0, num;
	int a[100101];

	while(cin >> num){
		a[i++] = num;
	}
	mergeSort(a, 0, i - 1);

	for(int j = 0; j < i; j++){
		cout << a[j] << " ";
	}

	cout << endl << cnt;

	return 0;


}