/*#include <iostream>
#include <cmath>
#include<algorithm>
#include <vector>

using namespace std;

vector <int> v;

int main(){
	int n;
	cin >> n;
	int sum1 = 0, sum2 = 0, maxi = -1000, cnt1 = 0, cnt2 = 0, z;

	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			v.push_back(i);
		}
	}
    for(int i = 0; i < v.size(); i++){
    	while(v[i] > 0){
    		sum2 += v[i] % 10;
    		cnt1++;
    		v[i] /= 10;
    	}
    	if(sum2 > maxi){
    		maxi = sum2;
    		v[i] = z;
    	}
    	sum2 = 0;
    }
	while(n > 0){
		sum1+=n % 10;
		cnt2++;
		n /= 10;
	}
 cout << "sum1 " << sum1 << endl << "maxi " << maxi<< endl << "z " << z << endl;
    cout << "cnt1 " << cnt1 << endl << "cnt2 " << cnt2 ;
    
	if(maxi >= sum1){
		cout << maxi;
	}
	else if(sum1 == maxi){
		if(cnt1 > cnt2){
			cout << cnt2;
		}
		else{
			cout << cnt1;
		}
	}

return 0;

}
*/
#include <iostream>
int sum (int n) {
    int sum=0,d;
    while (n>0) {
        d = n % 10;
        sum += d;
        n = n / 10;
    }
    return sum;
}
int main () {
    int n,d=-1;
    cin >> n;
    for (int i=2;i<n;i++) { //если не считать 1 и само число делителями.
        if (n % i == 0)
            if (sum(i)>sum(d))
                d = a;
            else if ((sum(i)=sum(d)) && (i<d))
                    d = a;
    }
}