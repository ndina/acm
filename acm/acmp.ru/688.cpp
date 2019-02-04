#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> v1(10000);
vector<int> v2(10000);

int main(){

    int x1, y1, x2, y2, n;
    

    cin >> x1 >> y1 >> x2 >> y2 >> n;

    int x[n], y[n];

    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        v1[i] = sqrt(abs(x1 - x[i]) + abs(y1 - y[i]));
        v2[i] = sqrt(abs(x2 - x[i]) + abs(y2 - y[i]));

    }

    for(int i = 0; i < n; i++){
        if(v1[i] <  v2[i]){
            cout << i + 1;
            return 0;
        }
    }

    cout << "NO";

    return 0;


}