#include <iostream>
using namespace std;
int main()
{
    int num1, ctr = 0;
    
	cin>> num1;
    for (int a = 1; a <= num1; a++)
    {
        if (num1 % a == 0)
        {
            ctr++;
        }
    }
    if (ctr == 2)
    {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}