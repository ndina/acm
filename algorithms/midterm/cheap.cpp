#include <bits/stdc++.h>

using namespace std;

void heapify(int *a, int n, int i){
	int largest = i; 
	int l = 2 * i + 1;
	int r = 2 * i + 2;
   
	if(l < n && a[l] > a[largest]){
		largest = l;
	}


	if(r < n && a[r] > a[largest]){
		largest = r;
	}


	if(largest != i){
		swap(a[i], a[largest]);

		heapify( a, n, largest);
	}
}

void heapSort(int *a, int n){

	for(int i = n / 2 - 1; i >= 0; i--){
		heapify(a, n, i);
	}


	for(int i = n - 1; i >= 0; i--){
		swap(a[0], a[i]);

		heapify(a, i, 0);
	}
}

int main(){

 
 int n, k;
 cin >> n >> k;
 int a[n];
 int mini;

 for(int i = 0; i < n; i++){
 	cin >> a[i];
 }
 
 for(int i = 0; i < n - k + 1; ++i){
	for(int j = i; j < i + k; j++){
 		 heapSort(a, k);
 		 for(int b = 0; b < k; k++){
 		 	mini = a[0];
 		 }
     	cout << mini << endl;
 	}
 }


 return 0;


}