#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <bits/stdc++.h>

using namespace std;


int main(){

  map<string, int> m;


  for(int i = 0; i < 10; i++){
    m["Student" + to_string(i)] = i;
  }

  

  map<string, int>::iterator it;
  cout << m.size() << "\n";

  for(it = m.begin(); it != m.end(); it++){
    cout << (*it).first << " " << (*it).second <<"\n";
  }




  return 0;
}