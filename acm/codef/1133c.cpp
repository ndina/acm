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
//     faster;
//     int h1, m1, h2, m2;
//     char c1, c2;
//     cin >> h1 >> c1 >> m1 >> h2 >> c2 >> m2;


//     int total = (h2 - h1)*60;

//     if(h1 == h2){
//         total += (m2 - m1);
//     }
//     else if(h1 != h2 ){
//         if(m1 == m2 ){
//            total += 0;
//         }else{
//             total += (60 - m1) + m2; 
//         }
//     }
//     int res1, res2;
//     cout << total << endl;
//     total  = total / 2;

//     cout << total << endl;
//     res2 = (total + m1) % 60;
//     if(res2 + m1 > 59){
//         res2 = (total + m1) % 60;
//          res1 += (total + m1) / 60;
//     }
//     else{
//         res1 = h1;
//         res2 = total + m1;
//     }


//     if(res1 <=9 && res2 > 9 ){
//         cout << "0" << res1 << ":" << res2;
//         return 0;
//     }
//     else if(res1 <= 9 && res2 <= 9){
//         cout << "0" << res1 << ":" << "0" << res2;
//         return 0;
//     }
//     else if(res1 > 9 && res2 <= 9){
//         cout << res1 << ":" << "0" << res2;
//         return 0;
//     }

//     cout << res1 << ":" << res2;



//     return 0;
// }

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

signed main(){
    faster;
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    sort(a, a + n);
    for(int i = 1; i < n; i++){
        if(a[i]  - a[i-1] <= 5){
            cnt++;
        }
    }
    // 1 2 10 12 15 17

    cout << cnt;
    return 0;
}