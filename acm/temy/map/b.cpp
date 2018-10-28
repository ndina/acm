#include <iostream>
#include <map>

using namespace std;

int main(){

	map<string, int>m;

	int mvalue = -1010101;

	m["Ast"] = 101001;
	m["Almaty"] = 1002323;
	m["Shymkent"] = 343534;
	m["Uralsk"] = 32435;

	map<string, int>::iterator it;
	string city;

    string key;
	for(it = m.begin(); it!=m.end(); it++){
		 key = it->first;
		int value = it->second;

		if(value > mvalue){
			mvalue = value;
			city = key;
		}

	}

	cout << city;

	return 0;
}

// #include <map>
// #include <iostream>

// using namespace std;

// int main(){

// 	map<string, int> m;

// 	m["Astana"] = 1006570;	
// 	m["Almaty"] = 1772779;	
// 	m["Shymkent"] = 932415;	
// 	m["Uralsk"] = 233932;

// 	map<string,int>::iterator it;

// 	int mvalue = INT_MIN;
// 	string city;

// 	for(it = m.begin(); it != m.end(); ++it){
// 		string key = (*it).first;
// 		int value =(*it).second;
// 		if(value > mvalue){
// 			mvalue = value;
// 			city = key;
// 		}
// 	}

// 	cout << city << " " << mvalue << endl;

// 	return 0;

// }