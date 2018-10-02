#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <string.h> // library for memset

using namespace std;

int used[1000001]; // массив для чисел

int main(){
	int t, n;
	cin >> t;

	memset(used, 0, sizeof(used)); // все числа массива стали нулями : 0 0 

	for(int i = 1; i <= t; i++){
		cin >> n;

		queue<pair<int, int> >q;
		q.push(make_pair(n, 0));// ложим а очередь пару числа и хода
		used[n] = i; // типа если n 3, то начинаем массив с трех  и used[3] = 0;

		while(q.front().first!= 0){ // пока число не равно нулю
           int x = q.front().first; // number
           int y = q.front().second; // number of steps
           q.pop();
          //это условие, чтобы отнимать 1
           if(x - 1 >= 0 and used[x-1] != i){ // чтобы не проверять много раз было ли число в массие или нет
           	q.push(make_pair(x - 1, y + 1));
           	used[x-1] = i;
           }
           // это условие, чтобы делить на 2
           for(int k = 2; k <= sqrt(x); k++){
           	if(x % k == 0){
           		if(used[x/k] != i){
           			used[x/k] = i;
           			q.push(make_pair(x/k, y + 1));
           		}
           	}
           }
		}
		cout << q.front().second << endl; // выводим число ходов

	}
return 0;
}