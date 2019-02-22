// #include <bits/stdc++.h>

// using namespace std;

// int main(){
// 	int n;
// 	cin >> n;
// 	int a[n];
// 	int cnt[1001010];

// 	for(int i = 1; i <= n; i++){
// 		cin >> a[i];
// 	}
// 	int m;
// 	cin >> m;
// //	int a[m];
// 	int x;

// 	for(int i = 1; i <= m; i++){
// 		//int x;
// 		cin >> x;
// 		cnt[x]++;
// 	}

// 	for(int j = 1; j <= n; j++){
// 		cout << cnt[j] << " " ;
// 	}


// }


#include<bits/stdc++.h>

using namespace std;

vector<pair<int, int> >v, vv;

#define pb push_back
map<int,int>mp;

int main(){
	int n;
	cin >> n;
	int a[n];
	int exs;
	for(int i = 1; i <= n; i++){
		cin >> exs;
		v.pb(make_pair(i, exs));
	}
	int m;
	cin >> m;

	int b[m];
	int x;
	for(int i = 0; i < m; i++){
		cin >> x;
		mp[x]++;
	}

	map<int,int>::iterator it;
	for(it = mp.begin(); it != mp.end(); it++){
		vv.pb(make_pair((*it).first, (*it).second));
	}

	for(int i = 0; i < n; i++){
		if(v[i].first == vv[i].first){
			if(v[i].second < vv[i].second){
				cout << "yes" << endl;
			}
			else{
				cout << "no" << endl;
			}
		}
	}

	return 0;

}