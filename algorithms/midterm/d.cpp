// #include <iostream>
// #include <cmath>
// #include <algorithm>

// using namespace std;

// int main(){
//  int n, k;
//  cin >> n >> k;
//  int a[n], b[k];
//  for(int i = 0; i < n; i++) cin >> a[i];

//  int sum = 0;
//  int l, r;
//  bool ok = false;
// for(int i = 0; i < n; i++){
// 	l = 0;
// 	r = n - 1;
// 	int m;
// 	while(l <= r){
// 		m = (l + r) / 2;
// 		while(a[i] <= a[m]){
// 			sum += a[i];

// 		}
// 		if(sum < k){
// 			l = 0;
// 			r = m + 1;
// 		}

//     }
// }
    

//    cout << r - l;
//   return 0;
// }

#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

int main() {
 int n;
 int left = 0, right = 0;
 int sum = 0;
 int ans = 234393940;
 int k;
 cin >> n >> k;
 int a[n];
 for (int i = 0; i < n; ++i) {
  cin >> a[i];
 }
 while (true) {
  while (sum < k && right < n) {
   sum += a[right];
   right++;
  }
  while (sum - a[left] >= k) {
   sum -= a[left];
   left++;
  }
  ans = min(ans, right - left);
  sum -= a[left];
  left++;
  if (right >= n - 1) break;
 }
 cout << ans << endl;
 return 0;
}