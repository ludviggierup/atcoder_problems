#include <iostream>
#include <string>

using namespace std;


int main() {
  string s;
  cin >> s;

  for (int w = 1; w <=2; w++) {
    for (int i = 0; i < s.size()-w+1; i++) {
      if (s[i] == s[i+w]) {
         cout << i + 1 << " " <<  i + 3;
         return 0;
      }
    }
  }
  cout << "-1 -1";
}
