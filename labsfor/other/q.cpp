#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s1, s2;

	cin >> s1 >> s2;

	int cnt = 0;


	//sort(s1.begin(), s1.end());

	for(int i = 0; i < s2.size(); i++){
		if(s2.substr(i, s1.size())==s1){
			cnt++;
		}
	}



	if(s2.size() % s1.size()  == 0){
		if(s2.size() / s1.size() == cnt){
           cout <<"YES";
		}
		else{
		cout <<"NO";
	    }
	}
	
	
	else{
		cout <<"NO";
	}

	return 0;
}