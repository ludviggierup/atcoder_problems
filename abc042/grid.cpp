#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <functional>

using namespace std;

int MOD = 1e9 + 7;



int main() {
  int h, w, a, b;
  cin >> h >> w >> a >> b;


  vector<long long> fact(h + w + 1, 1);
  vector<long long> invfact(h + w + 1, 1);
  
  //precompute factorials
  for (int i = 1; i < h + w + 1; i++) {
    fact[i] = i * fact[i-1];
  }

  // precompute inverse factorials
  invfact[h+w] = (long long) pow(fact[h+w], MOD - 2) % MOD;
  for (int i = h+w-1; i >= 0; i--) {
    invfact[i] = invfact[i+1] * (i+1) % MOD;
    cout << invfact[i] << " ";
  }
  cout << endl;
  
  auto comb = [&fact, &invfact](int n, int k) {
    if (k < 0 || k > n) {
      return 0ll;
    }
    return fact[n] * invfact[k] % MOD * invfact[n-k];
  };

  long long res = 0ll;
  for (int y = 1; y < h - a + 1; y++) {
    long long left = comb(y+b-1, b) % MOD;
    long long right = comb(h-y+w-b-1, h-y) % MOD;

    cout << left << "+" << right << endl;

    res += (res+left*right) % MOD;
  }
  cout << res;
}
