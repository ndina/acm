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

// using namespace std;


// set<int>s;

// bool prime(int x){
// 	int cnt = 0;
// 	for(int i = 2; i <= sqrt(x); i++){
// 		if(x % i == 0){
// 			cnt++;
// 		}
// 		if(cnt != 0){
// 			break;
// 		}
// 	}
// 	if(cnt > 0){
// 		return false;
// 	}
// 	else{
// 		return true;
// 	}
// }

// vector<pair<int, int> > v, v1;
// map<int, int> m;


// signed main(){
 
//  int n;
//  cin >> n;
//  int a[8][8];
//  int cnt = 1;

//  for(int i = 0; i < 1; i++){
//  	for(int j = 0; j < 8; j++){
//  		a[i][j] == cnt;
//  		cnt++;
//  	}
//  }

//   for(int i = 0; i < 1; i++){
//  	for(int j = 0; j < 8; j++){
//  		cout << a[i][j] << " ";
//  	}
//  }
// }

#include<bits/stdc++.h> 
using namespace std; 
main () {
 int a[4]={0}, i, n, k; 
 cin >> n; 
 a[0]=n-8; 
 a[1]=n+8;
  a[2]=n-1; 
  a[3]=n+1; 
  if(n%8==0) a[3]=-1; 
  if(n%8==1) a[2]=-1; 
  sort(a,a+4); 
  for(i=0; i<4; i++) 
  	if(a[i]>0&&a[i]<65 ) cout << a[i]<<" "; }

