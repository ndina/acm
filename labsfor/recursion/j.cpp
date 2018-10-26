#include <iostream>

using namespace std;

int rec(int ans)

{
	int n;
	cin >> n;
	if(n == 0) return ans;
	ans += n;

	return rec(ans);
}

int main(){

	int n;
    cout << rec(0);

	return 0;
}