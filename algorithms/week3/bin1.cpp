#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n], b[k];

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < k; i++){
		cin >> b[i];
	}

	for(int i = 0; i < k; i++){
		int l = 0;
		int r = n - 1;
		int m;
		while(l <= r){
			m = (l + r) / 2;
			if(a[m] < b[i] ){
				l = m + 1;
			}
			else if(a[m] > b[i]){
				r = m - 1;
			}
			else {
				break;
			}
		}
		if(l != r){
            if(abs(a[r] - b[i]) < abs(a[l] - b[i])){

            	//cout <<"1 " <<  abs(a[r] - b[i]) <<  " " <<(a[l] - b[i])<< endl;

            	while()
            	cout << a[r] << " "<<endl;
            }
            else{
            //	cout <<"2 " <<  abs(a[r] - b[i]) <<  " " <<(a[l] - b[i])<< endl;
            	cout << a[l] << " " << endl;
            }
		}
		//cout << a[l] << " ";
	}


return 0;

}