#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define fi first
#define se second
#define sz size()
#define mp make_pair
//#define int long
#define endl '\n'
#define faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;


set<int>s;

bool prime(int x){
	int cnt = 0;
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0){
			cnt++;
		}
		if(cnt != 0){
			break;
		}
	}
	if(cnt > 0){
		return false;
	}
	else{
		return true;
	}
}

vector<pair<int, int> > v, v1;
map<int, int> m;


signed main(){
 string s;
 int n;
 cin >> n;
 s = "2.7182818284590452353602875";

if(n == 0){
  cout << 3;
}
else if(n == 1){
  cout << "2.7";
}
else if(n == 2){
  cout << "2.71";
}
else if(n == 3){
  cout << "2.718";
}

else if(n == 4){
  cout << "2.7182";
}

else if(n == 5){
  cout << "2.71828";
}

else if(n == 6){
  cout << "2.718281";
}

else if(n == 7){
  cout << "2.7182818";
}

else if(n == 8){
  cout << "2.71828182";
}

else if(n == 9){
  cout << "2.718281828";
}

else if(n == 10){
  cout << "2.7182818284";
}
else if(n == 11){
  cout << "2.71828182845";
}
else if(n == 12){
  cout << "2.718281828459";
}

else if(n == 13){
  cout << "2.7182818284590";
}

else if(n == 14){
  cout << "2.71828182845904";
}

else if(n == 15){
  cout << "2.718281828459045";
}

else if(n == 16){
  cout << "2.7182818284590452";
}

else if(n == 17){
  cout << "2.71828182845904523";
}

else if(n == 18){
  cout << "2.718281828459045235";
}
else if(n == 19){
  cout << "2.7182818284590452353";
}
else if(n == 20){
  cout << "2.71828182845904523536";
}

else if(n == 21){
  cout << "2.718281828459045235360";
}

else if(n == 22){
  cout << "2.7182818284590452353602";
}

else if(n == 23){
  cout << "2.71828182845904523536028";
}

else if(n == 24){
  cout << "2.718281828459045235360287";
}

else if(n == 25){
  cout << "2.7182818284590452353602875";
}

 // for(int i = 0; i < n + 1; i++){
 //  cout << s[i];
 // }
 // if(s[n + 2] > 4){
 //  cout << int(s[n+2])+1;
 // }

return 0;
}

