#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;

  int a[26] = {};

  for (char c : s) {
    a[c-'a'] += 1;
  }

  for (int x : a) {
    if (x % 2 != 0) {
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}
