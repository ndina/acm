// #include <bits/stdc++.h>

// #define pb push_back
// #define ll long long
// #define fi first
// #define se second
// #define sz size()
// #define mp make_pair
// #define int long
// #define endl '\n'
// #define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
// const double PI = acos(-1.0);
// const int inf = int(1e9) + 7;
// using namespace std;  
// signed main(){
// 	faster;

// 	int n, m;
// 	cin >> n >> m;
// 	int a[n][m];
// 	int cnt = 0;

// 	for(int i = 1; i <= n; i++){
// 		for(int j = 1; j <= m; j++){
// 			if(i % 2 == 1){
// 				a[i][j] = (i - 1)*m + j - 1;
// 			}
// 			else{
// 				a[i][j] = i * m - j ;
// 			}
// 		}
// 	}

// 	// for(int i = 1; i <= n; i++){
// 	// 	for(int j = 1; j <= m; j++){
// 	// 		cout << a[i][j] << " ";
// 	// 	}
// 	// 	cout << endl;
// 	// }

// 	int y,x;
// 	cin >> y >> x;
	

// 	cout << a[y][x];

// 	return 0;
// }


#include <iostream>
using namespace std;
 
int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int arr[n][m];
    int num = 0;
    for(int i = 0; i < n; ++i) {
        int dir, j;
        if(i % 2 == 0){
            j = 0;
            dir = 1;
        }
        else {
            j = m-1;
            dir = -1;
        }
        for(; j < m&&j >= 0; j+= dir) {
            arr[i][j] = num;
            ++num;
        }
    }
    cout << arr[x - 1][y - 1];
    return 0;
}