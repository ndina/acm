#include <bits/stdc++.h>

using namespace std;

struct f{
	string name;
	double p;
};

bool compare(f a, f b){
	if(a.p != b.p) return a.p > b.p;
	else if(a.p == b.p) return a.name > b.name;	
}

vector<double, string> v;
#define pb push_back


int main(){
	int n;
	cin >> n;
	f a[10101];
		while(n--){
		int x;
		cin >> x;
		for(int i = 0; i < x; i++){
			cin >> a[i].p >> a[i].name;
		}
	    compare(a, )
	}
}