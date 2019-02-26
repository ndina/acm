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
 char a[100][100];

 for(int i = 0; i < 3; i++){
 	for(int j = 0; j < 3; j++){
 		cin >> a[i][j];
 	}
 }

 if(a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][0] == 'X'){
 	cout << "Win";
 	return 0;
 }
 if(a[0][0] == a[0][1] && a[0][1] == a[0][2] && a[0][0] == 'O'){
 	cout << "Lose";
 	return 0;
 }
 if(a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][0] == 'X'){
 	cout << "Win";
 	return 0;
 }
  if(a[1][0] == a[1][1] && a[1][1] == a[1][2] && a[1][0] == 'O'){
 	cout << "Lose";
 	return 0;
 }
  if(a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][0] == 'X'){
 	cout << "Win";
 	return 0;
 }
 if(a[2][0] == a[2][1] && a[2][1] == a[2][2] && a[2][0] == 'O'){
 	cout << "Lose";
 	return 0;
 }
 if(a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[0][0] == 'X'){
 	cout << "Win";
 	return 0;
 }
 
 if(a[0][0] == a[1][0] && a[1][0] == a[2][0] && a[0][0] == 'O'){
 	cout << "Lose";
 	return 0;
 }

 if(a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[0][1] == 'X'){
 	cout << "Win";
 	return 0;
 }
  if(a[0][1] == a[1][1] && a[1][1] == a[2][1] && a[0][1] == 'O'){
 	cout << "Lose";
 	return 0;
 }
   if(a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[0][2] == 'O'){
 	cout << "Lose";
 	return 0;
 }
    if(a[0][2] == a[1][2] && a[1][2] == a[2][2] && a[0][2] == 'X'){
 	cout << "Win";
 	return 0;
 }
 if(a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] == 'X'){
 	cout << "Win";
 	return 0;
 }

if(a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] == 'O'){
 	cout << "Lose";
 	return 0;
 }
 if(a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] == 'X'){
 	cout << "Win";
 	return 0;
 }
  if(a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] == 'O'){
 	cout << "Lose";
 	return 0;
 }

 cout << "Draw";

 return 0;

 

}

