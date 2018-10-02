#include <iostream>
#include <deque>

using namespace std;

int main(){
	deque<int> a, b;
	long long hod = 0;
  
    int n, cnt1 = 0, cnt2 = 0;

	for(int i = 0; i < 5; i++){
		cin >> n;
		a.push_back(n);
	}

	for(int i = 0; i < 5; i++){
		cin >> n;
		b.push_back(n);
	}
    while(a.size() != 0 && b.size() != 0){
    	if(hod < 1000000){
		/*if (cnt1 + cnt2 > 10) break;
		for (auto x : a)
			cout << x << " ";
		cout << endl;
		for (auto x : b)
			cout << x << " ";
		cout << endl << endl;
		*/

	    if(a.front() == 9 && b.front() == 0){
	    	cnt1 = 0;
			b.push_back(a.front());
			b.push_back(b.front());
			a.pop_front();
			b.pop_front();
			cnt2++;
			hod++;
	    }
	     else if(a.front() == 0 && b.front() == 9){
	    	cnt2 = 0;
			a.push_back(a.front());
			a.push_back(b.front());
			a.pop_front();
			b.pop_front();
			cnt1++;
			hod++;
	    }
		   else  if(a.front() > b.front()){
			cnt2 = 0;
			a.push_back(a.front());
			a.push_back(b.front());
			a.pop_front();
			b.pop_front();
			cnt1++;
			hod++;
		    }
		    else if(b.front() > a.front()){
			cnt1 = 0;
			b.push_back(a.front());
			b.push_back(b.front());
			a.pop_front();
			b.pop_front();
			cnt2++;
			hod++;
		    }
	   
    }
    else{
    	cout <<"botva";
    	return 0;
    }
}

	if(cnt1 != 0){
		cout << "first" << " " << cnt1;
	}
	else if(cnt2 != 0){
		cout << "second" << " " << cnt2;
	}
    
    return 0;
}