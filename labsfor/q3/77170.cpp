#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

int main(){

	map<string,int> m;
	string word,longest,shortest;

	int n;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> word;
		m[word]++;
		   if(word.size() > longest.size()){
			longest = word;
		    }
		    if(word.size() < shortest.size() || shortest.size() == 0){
			shortest = word;
		    }
	     

	}

   if(m[shortest] >= m[longest]){
   	cout <<"My type!";
   }
   else{
   	cout << "Not my type";
   }


	return 0;
}