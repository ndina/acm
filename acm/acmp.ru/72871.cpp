#include <iostream>

using namespace std;

int main(){
	int n, cnt[26];
    cin >> n;
    char x;

    for(int i = 1; i <= n; i++){
    	cin >> x;
    	cnt[x - 'a']++;
    }

    for(int i = 0 ; i < 26; i++){
    	if(cnt[i] == 0)
    		continue;
    	cout << char(i + 'a') << " " << cnt[i];
    }
    return 0;
}