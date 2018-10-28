#include <iostream>
#include <cstdio>
const int N = 1e3+5;

using namespace std;

// int main(){

// 	int n;
// 	char s[N];
// 	scanf("%d%s", &n, s + 1);
// 	int p = 0;
// 	for(int i = 0; i < n; i++) 
// 	if(s[i] != s[i+1]) p = i;
//     if(!p) return !printf("NO\n");
//     printf("YES\n%c%c", s[p], s[p+1]);
//     return 0;
// }

int main(){
	int n, i = 1;
	string s, ans="";
	cin >> n;
	if(n > 0){
		cin >> s;
	}
	if(n <= 1){
		cout <<"NO";
	}
	else{
		while(i < n && s[i] == s[i-1]){
			i++;
		}
		if(i >= n){
			cout <<"NO";
		}
		else{
			ans+=s[i-1];
			ans+=s[i];
			cout <<"YES" << endl;
			cout << ans;
		}
	}

	return 0;
}