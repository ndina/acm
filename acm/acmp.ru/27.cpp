6#include <iostream>

using namespace std;

int main(){
	int w, h, n;
	int x1, y1, x2, y2;
	int cnt = 0;

	cin >> w >> h >> n;
	int arr[w][h];

	for(int i = 0; i < w; i++){
		for(int j = 0; j < h; j++){
           arr[i][j] = 0;
		}
	}

	while(n > 0){
		cin >> x1 >> y1 >> x2 >> y2;

		for(int i = x1; i < x2; i++){
			for(int j = y1; j < y2; j++){
				arr[i][j] = 1;
			}
		}
		n--;
	}

	for(int i = 0; i < w; i++){
		for(int j = 0; j < h; j++){
		  if(arr[i][j] == 0){
		  	cnt++;
		  }
		}
	}
	cout << cnt;
	return 0;
}