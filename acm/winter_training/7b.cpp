#include <bits/stdc++.h>

using namespace std;

#define ll long long
queue<ll>q1, q2;

int main(){
     
    ll n, k1, k2, cnt = 0, y ,x;
	cin >> n;
	ll a1[1000], a2[1000];
    
    cin >> k1;
	for(int i = 0; i < k1; i++){
		cin >> a1[i];
		q1.push(a1[i]);
	}
    cin >> k2;
	for(int i = 0; i < k2; i++){
		cin >> a2[i];
		q2.push(a2[i]);
	}

	while(true){
		x = q1.front();
		y = q2.front();

		q1.pop();
		q2.pop();

		if(x > y){
			q1.push(y);
			q1.push(x);
		}
		else{
			q2.push(x);
			q2.push(y);
		}
		cnt++;
		if(q1.size() == 0){
			cout << cnt << " " << 2;
			return 0;
		}
		if(q2.size() == 0){
			cout << cnt << " " << 1;
			return 0;
		}
		if(cnt>100001){
			break;
		}
	}

	cout << -1;

	return 0;
}