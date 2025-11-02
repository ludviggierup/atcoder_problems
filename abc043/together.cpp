#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int best = std::numeric_limits<int>::max();
  for (int x = -100; x <= 100; x++) {
    int cur = 0;
    for (int j = 0; j < n; j++) {
      cur += (a[j]-x) * (a[j]-x);
      if (cur > best) continue;
    }
    if (cur < best) best = cur;
  }
  cout << best;

}
