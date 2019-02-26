#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<int> q;
	q.push(12);
	q.push(11);

	cout << q.back() << endl;

	return 0;
}