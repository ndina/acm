// // #include <iostream>

// // using namespace std;

// // int main(){
// // 	string s;
// // 	int sum1 = 0, sum2 = 0;
// // 	bool ok = false;

// // 	cin >> s;

// // 	for(int i = 0; i < s.size() - (s.size() - i + 1); i++ ){
// // 		sum1 += s[i];
// // 		for(int j = s.size() - (s.size() - i + 1); j < s.size(); j++ ){
// // 			sum2 += s[i];
// // 		}

// // 		if(sum1 == sum2){
// // 			ok = true;
// // 			return 0;
// // 		}
// // 	}
// // 	cout << sum1 << endl<< sum2 << endl;

// // 	if(ok){
// // 		cout <<"YES";
// // 	}
// // 	else{
// // 		cout <<"NO";
// // 	}

// // }

// #include <bits/stdc++.h>

// using namespace std;

// int main(){

// 	string s;
// 	cin >> s;
// 	int i = 1;
// 	string a, b;
// 	bool ok = false;
    
//     int sum1 = 0, sum2 = 0;
// 	while(1){
// 		// a = s.substr(0, i);
// 		// b = s.substr(i + 1, s.size() - i );
// 		for(int m = 0; m < i; m++){
// 			sum1 += s[m];
// 		}
// 		for(int m = i + 1; i < s.size(); m++){
// 			sum2 += s[m];
// 		}
// 		if(sum1 == sum2){
// 			ok = true;
// 			return 0;
// 		}
// 		i++;
// 	}
// 	cout << sum1 << sum2 ;


// 	if(ok){
// 		cout <<"YES";
// 	}
// 	else{
// 		cout << "NO";
// 	}
// }
#include <bits/stdc++.h>
using namespace std;
int main(){


int number;
cin >> number;
int first_total = 0;
while (number > 999)
{
    first_total+= number % 10; 
    number /= 10;
}
int second_total= 0;
while ( number > 9 )
{
    second_total+= number % 10;
    number /= 10;
}
 
if ( first_total== second_total ) {
	cout <<"NO";
}
else{
	cout << "YES";
}

return 0;

}
