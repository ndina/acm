#include <iostream>

using namespace std;

int count(int n, int k = 4, int min = 1)
{
    if (n < min*k) return 0;
    if (k == 1) return 1;
    int sum = 0;
    for(int i = min; i <= n/k; ++i)
        sum += count(n-i,k-1,i);
    return sum;
}

int main(){
	int n;
	cin >> n;

	cout << count(n, 4, 1);
}