#include <iostream>
#include <vector>
using namespace std;
vector<char> ans;
bool used[100];
string s;

void calc(int pos) {
  if (pos == s.size() ) {
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i];
    }
    cout << "\n";
    return;
  }

  for (int i = 0; i <s.size(); i++) {
    if (!used[i]) {
      used[i] = true;
      ans.push_back(s[i]);
      calc(pos + 1);
      used[i] = false;
      ans.pop_back();
    }
  }
}

int main() {

  cin>>s;
  calc(0);

}