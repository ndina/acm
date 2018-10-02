//Solution by NurlashKO
#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;


void solve(int test_case) {
    int p, c, x;
    string cmd;
    deque<int> d;

    cin >> p >> c;
    if (!p && !c) exit(0);
    cout << "Case " << test_case << ":\n";

    // From the problem statements we know that number of commands(C) is no more than 1000.
    // It is easy to prove that we don't need to store more than 1000 citizens. Home Work :)
    for (int i = 1; i <= p && i <= 1000; i++) d.push_back(i);

    for (int i = 1; i <= c; i++) {
        cin >> cmd;
        if (cmd == "N") {
            int cur = d.front();
            cout << cur << "\n";
            d.pop_front();
            d.push_back(cur);
        } else {
            int x;
            cin >> x;
            deque <int> buf;
            // Get all elements except 'x' from d and move to buf.
            while (!d.empty()) {
                int cur = d.front();
                d.pop_front();
                if (cur != x) {
                    buf.push_back(cur);
                }
            }
            // 'buf' now contains all elements of d except x.
            d = buf;
            // Return 'x' back.
            d.push_front(x);
        }
    }
}

int main() {
    int test_case = 0;
    while (++test_case) {
        solve(test_case);
    }
}