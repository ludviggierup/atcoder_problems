#include <iostream>
#include <set>
#include <vector>
#include <list>

using namespace std;

int smallest(int dig, set<int> allowed) {
  for (int a : allowed) {
    if (a >= dig) {
      return a;
    }
  }
  return *allowed.bgein();
}

int zero_right(int *a, int len, int i, int sm) {
  for (int j = i; j < len; j++) {
    a[j] = 0;
  }
  return 0;
}

int main() {
  int n, k;
  cin >> n >> k;
  set<int> bad_digits;
  int d;
  for (size_t i = 0; i < k; i++) {
    cin >> d;
    bad_digits.insert(d);
  }

  set<int> allowed = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int bad : bad_digits) {
    allowed.erase(bad);
  }

  auto it = allowed.begin();
  int first = *it;
  int smallest_nonzero = first;
  if (smallest_nonzero == 0) {
    smallest_nonzero = *(++allowed.begin());
  }

  string s = to_string(n);
  int a[s.size()+1] = { };
  for (int i = 0; i < s.size(); i++) {
    a[i+1] = s[i] - '0';
  }
  int alen = (sizeof(a) / sizeof(a[0]));
  // go backwards
  for (int i=alen-1; i >= 1; i--) {
    break;
  }
  
  for (int i = 0; i < alen; i++) {
    if (i == 0 && a[i] == 0) continue;
    cout << a[i];
  }
}
