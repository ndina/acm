#include <iostream>

using namespace std;

int main(){
	string s;
	int sum1 = 0, sum2 = 0;
	bool ok = false;

	cin >> s;

	for(int i = 0; i < s.size() - (s.size() - i + 1); i++ ){
		sum1 += s[i];
		for(int j = s.size() - (s.size() - i + 1); j < s.size(); j++ ){
			sum2 += s[i];
		}

		if(sum1 == sum2){
			ok = true;
		}
	}

	if(ok){
		cout <<"YES";
	}
	else{
		cout <<"NO";
	}

}