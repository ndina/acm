#include <iostream>

using namespace std;

int main()
{
 int a[100], n;
 cin>>n;
 a[0] = 0;
 for(int i=1; i<=n; i++){
  if(i%2 == 0){
   a[i] = min(a[i-1], a[i/2]) + 1;
  }
  else a[i] = a[i-1] + 1
; }

 for(int i=0; i<=n; i++)
 {
  cout << i << '\t';
 }
 cout << endl;

 for(int i=0; i<=n; i++)
 {
  cout << a[i] << '\t';
 }
 cout << endl;
}
