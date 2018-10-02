#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	int n, a, b, c;
	cin >> n;
	int nums = 0;
	cin >> a >> b>> c;
     n--;

	if (n == 0)
	{
		cout<< 0;
		return 0;
	}
	
	nums += min(a,b);
    
    //nums += (n - 2) * min(a, min(b,  c));
	nums += (n - 1) * min(a, min(b, c));

	cout<< nums;


	return 0;

}
