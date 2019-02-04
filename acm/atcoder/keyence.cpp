// #include <bits/stdc++.h>

// using namespace std;

// #define pb push_back

// vector<char>v;

// int main(){
   
// 	string s;
// 	cin >> s;

// 	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;

// 	for(int i = 0; i < s.size(); i++){
// 		if(s[i] == 'k'){
// 			if(sum1 == 1){
// 				continue;
// 			}
// 			else{
//                v.pb(s[i]);
//                sum1++;
// 			}
			
// 		}
// 		if(s[i] == 'e'){
// 			if(sum2 == 3){
// 				continue;
// 			}
// 			else{
//                v.pb(s[i]);
//                sum2++;
// 			}
// 		}
// 		if(s[i] == 'y'){
// 			if(sum3 == 1){
// 				continue;
// 			}
// 			else{
//                v.pb(s[i]);
//                sum3++;
// 			}
// 		}
// 		if(s[i] == 'n'){
// 			if(sum4 == 1){
// 				continue;
// 			}
// 			else{
//                v.pb(s[i]);
//                sum4++;
// 			}
// 		}
// 		if(s[i] == 'c'){
// 			if(sum5 == 1){
// 				continue;
// 			}
// 			else{
//                v.pb(s[i]);
//                sum5++;
// 			}
// 		}
// 	}

// 	if(v.size() == 0){
// 		cout << "NO";
// 		return 0;
// 	}



// 	//sort(v.begin(), v.end());

// 	for(int i = 0 ; i < v.size(); i++){
// 		cout << v[i];
// 	}
// 	cout << endl;

// 	if(v[0] == 'c' && v[1] == 'e' && v[2] == 'e' && v[3] == 'e' && v[4] == 'k' && v[5] == 'n' && v[6] == 'y'){
// 		cout <<"YES";
// 	}
// 	else{
// 		cout << "NO";
// 	}
// 	return 0;


// }

#include <bits/stdc++.h>

using namespace std;

#define pb push_back

vector<char>v;

int main(){
   
	string s;
	cin >> s;

	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0;

	for(int i = 0; i < s.size(); i++){
		if(s[i] == 'k'){			
               v.pb(s[i]);
               		
		}
		if(s[i] == 'e'){
			
               v.pb(s[i]);

		}
		if(s[i] == 'y'){

               v.pb(s[i]);

		}
		if(s[i] == 'n'){

               v.pb(s[i]);

		}
		if(s[i] == 'c'){

              v.pb(s[i]);

		}
	}

	if(v.size() == 0){
		cout << "NO";
		return 0;
	}

	for(int i = 0; i < v.size(); i++){
		if(v[i] == 'k'){
			index1 = i;
		}
		if(v[i] == 'e'){
			index2 = i;
		}
		if(v[i] == 'y'){
			index3 = i;
		}
		if(v[i] == 'n'){
			index4 == i;
		}
		if(v[i] == 'c'){
			index5 == i;
		}
	}





	//sort(v.begin(), v.end());

	for(int i = 0 ; i < v.size(); i++){
		cout << v[i];
	}
	cout << endl;

	// if(v[0] == 'c' && v[1] == 'e' && v[2] == 'e' && v[3] == 'e' && v[4] == 'k' && v[5] == 'n' && v[6] == 'y'){
	// 	cout <<"YES";
	// }
	// else{
	// 	cout << "NO";
	// }
	// return 0;


}