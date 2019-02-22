// #include <iostream>
// #include <vector>
// #include <bits/stdc++.h>

// using namespace std;


// vector<int>s;

// int main(){
// 	ios_base::sync_with_stdio(0);
// 	int n;
// 	double v, l;
// 	cin >> n >> v >> l;
// 	int a[n * 2];

// 	double km = v / 60;

// 	double sum1 = 0, sum2 = 0;

// 	for(int i = 0; i < n * 2; i++){
// 		cin >> a[i];
// 		if(i % 2 != 0){
// 			sum1 += a[i];
// 		}
//         if(i % 2 == 0){
//         	s.push_back(a[i]);
//         }
// 	}

// 	double start = (a[0] - 0) / km;
//     double f = l - s[s.size() - 1];

// 	for(int i = 1; i < s.size(); i++){
//        sum2+=((s[i] - s[i-1]) / km);
// 	}
  
//     double res = start+  sum1 + sum2 + f /  km;
//     printf("%.2f",res );

//     return 0;


// }

#include <bits/stdc++.h>

using namespace std; // 55, 384 + 1,538

#define d double

vector<int>vv;

int main(){

	double n, v, l;

	cin >> n >> v >> l;

	double u = v / 60;

	int a[100];

	d sum1 = 0, sum2 = 0;

	int t;	

	for(int i = 0; i < n; i++){
		cin >> a[i] >> t;
		vv.push_back(a[i]);
		sum1 += t;
	}
    
    if(vv[0] != 0){
		sum2 += vv[0] / u;
	}

//	cout <<sum2 << endl;

	if(vv[vv.size() - 1] != l){
		sum2 += ((l - vv[vv.size() - 1]) / u);
	}
	//cout <<sum2 << endl;

	for( int i = 0; i < vv.size() - 1; i++){
		sum2 += (abs(vv[i] - vv[i + 1]) / u);
	//	cout << sum2 << endl;
	}
  //5 + 1,538 + 10 + 58.46 + 1 + 55,38
	d res = sum1 + sum2;

	printf("%.2f", res);


}