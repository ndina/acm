#include <iostream>
#include <cmath>

using namespace std;

int main(){

	string s ;

	cin >> s;

	int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4=0, cnt5 = 0, cnt6 = 0, cnt7 = 0, cnt8 = 0, cnt9 = 0;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == 1){
			cnt1++;
		}
		else if(s[i] == 2){
			cnt2++;
		}
		else if(s[i] == 3){
			cnt3++;
		}

		else if(s[i] == 4){
			cnt4++;
		}
		else if(s[i] == 5){
			cnt5++;
		}
		else if(s[i] == 6){
			cnt6++;
		}
		else if(s[i] == 7){
			cnt7++;
		}
		else if(s[i] == 8){
			cnt8++;
		}
		else if(s[i] == 9){
			cnt9++;
		}
		else if(s[i] == 0){
			cnt0++;
		}
	}

	if(cnt0 == cnt1 && cnt1 == cnt2 && cnt2 == cnt3 && cnt3 == cnt4 && cnt4 == cnt5 && cnt5 == cnt6 && cnt6==cnt7 && cnt7 == cnt8 && cnt8 == cnt9){
		cout <<"YES";
	}
	else{
		cout <<"NO";
	}

	return 0;
}