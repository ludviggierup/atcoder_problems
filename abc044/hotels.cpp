#include <iostream>

using namespace std;

int main() {
  int n, k, x, y;

  cin >> n >> k >> x >> y;

  int res = x * min(k,n) + y * (n-min(k, n));

  cout << res;
}
