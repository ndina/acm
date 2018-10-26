#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void merge(int *arr, int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 
  
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0; 
    j = 0; 
    k = l;  
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++;
            cnt++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
            cnt++;
        } 
        k++; 
    } 
 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
        cnt++;
    } 
  
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++;
        cnt++; 
    } 
} 
  

void mergeSort(int *arr, int l, int r) 
{ 
    if (l < r) 
    {  
        int m = l+(r-l)/2; 
 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

int main(){

int n;
cin >> n;
int a[n];

for(int i = 0; i < n; i++){
    cin >> a[i];
}

mergeSort(a, 0, n - 1);

for(int i = 0; i < n; i++){
    if(i == n -1){
        cout << a[i] << endl;
    }
    else{
        cout << a[i] << " ";

    }
}


cout << cnt << endl;


}