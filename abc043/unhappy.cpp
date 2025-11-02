#include <iostream>

using namespace std;


int main() {
  string s;
  cin >> s;

  string res;

  for (char c : s) {
    if (c == 'B') {
      if (!res.empty()) {
        res.pop_back();
      }
    }
    else {
      res.push_back(c);
    }
  }
  cout << res;
}
