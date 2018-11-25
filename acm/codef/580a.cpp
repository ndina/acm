// #include <bits/stdc++.h>

// using namespace std;

// vector<int>v;

// int main(){
// 	int n;
// 	cin >> n;
// 	int a[100100];
// 	int cnt = 0;
// 	int maxi = 0;
// 	bool m  = false;
//     int b[100100];
// 	for(int i = 0; i < n; i++){
// 		cin >> a[i];
// 	}
// 	for(int i = 0; i < n - 1; i++){
// 		if(a[i] <= a[i+1]){
// 		  b[i] = 1;
// 		}
// 	}
			
// 	for(int i = 0; i < n - 1; i++){
// 		if(b[i] == 0){
// 			cnt = 0;
// 		}
		
// 		else{
// 			cnt++;
// 			maxi = max(maxi, cnt);
// 		}
// 	}



	

// 	cout << maxi + 1;
// 	return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main(){
    int cnt = 0, n, b[110000], a[110000],maxi=0;
    cin>>n;

    for(int i=0;i<n;i++)

        cin>>a[i];

    for(int i=0; i<n-1; i++)
        if(a[i]<=a[i+1])
            b[i]=1;
    for(int i=0; i<n-1; i++){
        if(b[i]==0)
                cnt = 0;
        else{
            cnt++;
            if(cnt>maxi)
                maxi=cnt;
        }
    }
    cout<<maxi+1;

    return 0;
}