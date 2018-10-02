#include <iostream>


using namespace std;


int main(){

  int n;
  
  cin >> n;

  int a[100][100] = {0};

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i == j) a[i][j] = 1;
      if(i + j == n - 1) a[i][j] = 1;
      if(i + j <= n - 2 && i > j) a[i][j] = 1;
      if(i + j >= n && i < j) a[i][j] = 1;
        
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }


  return 0;
}