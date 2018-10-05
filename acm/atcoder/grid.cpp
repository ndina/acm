#include <iostream>

using namespace std;

int main(){
  int h, w;

  cin >> h >> w;

  int x[100001], y[100001];

  char a[h][w];

  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      cin >> a[i][j];
      if(a[i][j] =='#'){
        x[i] = 1;
      }
    }
  }

  for(int j = 0; j < w; j++){
    for(int i = 0; i < h; i++){
      if(a[i][j] == '#'){
         y[j] = 1;
      }
    }
  }

  for(int i = 0; i < h; i++){
    if(x[i] == 1){
      for(int j = 0; j < w; j++){
        if(y[j] == 1){
          cout <<a[i][j];
        }
      }

    cout << endl;
    }
  }

  return 0;
}