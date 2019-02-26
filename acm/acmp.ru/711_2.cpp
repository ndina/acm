#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
 


map<string, int> mp;
int main(){

    int n, m;
    cin >> n >> m;
    string s;
    int p;
    int sum = 0;
 

 
    for(int i = 0; i < n; i++ ){
        cin >> s;
        for(int j = 0; j < m; j++){
            cin >>p;
            sum += p;

        }
        mp[s] = sum;
        sum = 0;
        //mini = min(mini, a[i].l);
        
    }
    int maxi = 101010;
    map<string, int>:: iterator it;

    for(it = mp.begin(); it != mp.end(); it++){
       maxi = min(maxi, (*it).second);
    }

   // cout << maxi << endl;
     for(it = mp.begin(); it != mp.end(); it++){
       if((*it).second == maxi){
        cout << (*it).first;
        return 0;
       }
    }
    // qsort(name, num, sizeof(info), auth_cmp); //по авторам

    // // for(int i = 1; i < n; i ++){
    // //     if(a[i].l < s){
    // //         s = a[i].l;
    // //         index = i;
    // //     }
    // // }
    // if(n == 1){
    //     cout << a[0].name;
 
    // }
    // else {
    //   cout << a[n - 1].name;
    //  }
}