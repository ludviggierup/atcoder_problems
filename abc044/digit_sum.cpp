#include <iostream>
#include <cmath>

using namespace std;

long f(long b, long n) {
  if (n<b) {
    return n;
  }
  return f(b, n/b) + n % b;
}

int main() {
  long long n, s;

  cin >> n >> s;

  if (s == n) {
    cout << n+1;
    return 0;
  }

  if (s > n) {
    cout << "-1";
    return 0;
  }

  for (int q = b; q < sqrt(n); q++) {
    int b = (n-s)/q + (n-s) % q;
    if (b == s) {
      cout << b << endl;
      return 0;
    }
  }

  cout << "-1";

}
