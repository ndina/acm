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