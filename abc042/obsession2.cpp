
#include <iostream>
#include <set>
#include <vector>
#include <list>

using namespace std;

bool is_ok(int numb, set<int> allowed) {
  for (char c : to_string(numb)) {
    if (allowed.count(c-'0') == 0) return 0;
  }
  return 1;
}

int main() {
  int n, k;
  cin >> n >> k;
  set<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int d;
  for (size_t i = 0; i < k; i++) {
    cin >> d;
    allowed.erase(d);
  }

  for (int i = n; i < 10*n; i++) {
    if (is_ok(i, allowed)) {
      cout << i;
      return 0;
    }
  }
}
