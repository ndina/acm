#include <bits/stdc++.h>

using namespace std;

stack<int> s;

void heapify(int *a, int n, int i){
	int largest = i; //largest is root
	int l = 2 * i + 1;
	int r = 2 * i + 2;
   
    //if left child is larger than root
	if(l < n && a[l] > a[largest]){
		largest = l;
	}

// if right child is larger than largest 
	if(r < n && a[r] > a[largest]){
		largest = r;
	}

    // if largest is not root
	if(largest != i){
		swap(a[i], a[largest]);

		//recursively heapify the affected sub-tree
		heapify( a, n, largest);
	}
}

void heapSort(int *a, int n){
	// building a heap
	for(int i = n / 2 - 1; i >= 0; i--){
		heapify(a, n, i);
	}

	//one by one extract an element from heap
	for(int i = n - 1; i >= 0; i--){
		swap(a[0], a[i]);

        // calling heapify on the reduced heap
		heapify(a, i, 0);
	}
}

int main(){
	int n;
	cin >> n;
	//int a[n];
	int cnt = 0;

	for(int i = 0; i < n; i++){
		int x, y;
		if(x == 0){
			cnt++;
			cin >> y;
			heapSort(s, s.size());
		}
		if(x == 1){
			//]]cnt = 0;
		}
	}

 return 0;


}