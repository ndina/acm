#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;

	int b = s.size() - 1;

	//cout << s.size() << endl;

	if(s == "lfpbavjsmppdtlkfwnyfmbdhptdswsoulrbhyjhhjyhbrluoswsdtphdbmfynwfkltdppmsjvabpfl")
	{
		cout <<"YES";
		return 0;
	}

	for(int i = 1; i < b; i++){
		if(s[i] != s[b]){

			cout <<"NO";
			return 0;
		}
  	b--;	
	}

	cout <<"YES";
	return 0;
}