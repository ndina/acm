#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define fi first
#define se second
#define sz size()
#define mp make_pair
#define int long
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
const double PI = acos(-1.0);
const int inf = int(1e9) + 7;
using namespace std;

vector<int>v;

signed main(){
    faster;
    int n, m;
    cin >> n >> m;
    char a[n][m];
    int b[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(b[i][j] == 7){
                if(a[i][j] == 'B' || a[i][j] == 'R' || a[i][j] == 'G' || a[i][j] == '.'){
                    cnt++;
                }
            }
            if(b[i][j] == 6){
                if(a[i][j] == 'B' || a[i][j] == 'R' || a[i][j] == 'G' || a[i][j] == '.'){
                    cnt++;
                }
            }         
            if(b[i][j] == 5){
                if(a[i][j] == 'B' || a[i][j] == 'R' || a[i][j] == '.'){
                    cnt++;
                }
            }
            if(b[i][j] == 4){
                if(a[i][j] == 'B' || a[i][j] == 'R' || a[i][j] == '.'){
                    cnt++;
                }
            }
            if(b[i][j] == 3){
                if(a[i][j] == 'B'  || a[i][j] == 'G' || a[i][j] == '.'){
                    cnt++;
                }
            } 
            if(b[i][j] == 2){
                if(a[i][j] == 'B'|| a[i][j] == 'G' || a[i][j] == '.'){
                    cnt++;
                }
            }  
            if(b[i][j] == 1){
                if(a[i][j] == 'B' || a[i][j] == '.'){
                    cnt++;
                }
            }  
            if(b[i][j] == 0){
                if(a[i][j] == 'B'|| a[i][j] == '.'){
                    cnt++;
                }
            }     
        }
    }
    if(cnt == n * m){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}