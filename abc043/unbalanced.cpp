#include <iostream>
#include <string>

using namespace std;


int main() {
  string s;
  cin >> s;

  if (s.size() < 2) {
    cout << "-1 -1";
    return 0;
  }

  for (int w = 1; w <= 2; w++) {
    for (int i = 0; i < s.size()-w; i++) {
      if (s[i] == s[i+w]) {
        cout << i+1 << " " << i+w+1;
        return 1;
      }
    }
  }
  cout << "-1 -1";
}
