#include <bits/stdc++.h>
#include <set>


//#define f first 
//#define s second 
#define pb push_back               
#define mp make_pair 


using namespace std;
set<int>s;

int main(){

  int n;
  cin >> n;
  bool ok;
  double x, y;
  int cnt = 0, cnt2 = 0;
  double a[n], b[n];

  for(int i = 0; i < n; i++){
  	cin >> a[i] >> b[i];

  	s.insert(a[i]);
  	if(b[i] != a[i] * 3.14){
  		cnt2++;
  	//	cout << b[i] << " " << a[i] * 3.14 << endl;
  	}
  	else if (b[i] == a[i] * 3.14){
  		cnt++;
  	}
  }

  set<int>::iterator it;

  //cout << cnt << " " << cnt2<<  endl;



 if(cnt2 > 0){
   	cout <<"NO" << endl;

  	for( it = s.begin(); it!= s.end(); it++){
  		cout << *it << " " << (*it) * 3.14 << endl;
  	}
  	
  }
   else if (cnt == n) {
  	cout << "YES";
  }

}