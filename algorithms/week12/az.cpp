#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	for(int i=1;i<n;i++){
		if(n%i==0){
		sum+=i;
		}
   }
	if(sum==n)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
	
}

