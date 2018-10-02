#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

stack<int> st_a[100001], st_b[10001];
int primes[10001];

void prime(){
	int max_prime = 10000;
	int k = 1;
    primes[1] = 2;
    for(int i = 3; i <= max_prime; i++){
    	bool ok = true;
    	for(int j = 2; j <= sqrt(i); j++){
    		if(i % j == 0){
    			ok = false;
    		}
    		if(ok){
    			primes[k] = i;
    			k++;
    		}
    	}
    }
}

int main(){
    int n, m, x;
    cin >> n >> m;

   /* int max_prime = 10000;
    int k = 1;
    int primes[10001];
    primes[1] = 2;
    for(int i = 3; i <= max_prime; i++){
    	bool ok = true;
    	for(int j = 2; j <= sqrt(i); j++){
    		if(i % j == 0){
    			ok = false;
    		}
    		if(ok){
    			k++;
    			primes[k] = i;
    		}
    	}

    }
    */
    prime();
    for(int i = 0; i < n; i++){
    	cin >> x;
    	st_a[0].push(x);
    }
    for(int i = 1; i <= m; i++){
    	while(!st_a[i - 1].empty()){
            if(st_a[i - 1].top() % primes[i] == 0){
    			st_b[i].push(st_a[i-1].top());
    		}
    		else{
    			st_a[i].push(st_a[i-1].top());
    		}	
    		st_a[i-1].pop();
    	}
         																								
    }

    for(int i = 1; i <= m; i++){
    	while(!st_b[i].empty()){
         	cout << st_b[i].top() << " ";
         	st_b[i].pop();
       	}
       	while(!st_a[m].empty()){
       		cout<<st_a[m].top() << " ";
       		st_a[m].pop();
       	}
   
    }

	return 0;
}