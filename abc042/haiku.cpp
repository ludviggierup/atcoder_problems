#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int is_haiku(int a, int b, int c) {
  vector<int> v = {a, b, c};
  vector<int> correct = {5, 5, 7};
  sort(v.begin(), v.end());
  return v == correct;
}

int main() {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;

  if (is_haiku(a, b, c)) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }

  return 0;
}
