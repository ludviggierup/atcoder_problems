#include <iostream>
#include <stack>

using namespace std;

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  stack<int> alice;
  stack<int> bob;
  stack<int> charlie;

  for (char c : string(a.rbegin(), a.rend())) {
    alice.push(c -'a');
  }
  for (char c : string(b.rbegin(), b.rend())) {
    bob.push(c -'a');
  }
  for (char c : string(c.rbegin(), c.rend())) {
    charlie.push(c -'a');
  }
  stack<int> p[3] = {alice, bob, charlie};

  int cur = 0;
  while (1) {
    if (p[cur].empty()) {
      cout << char(cur+'A');
      return 0;
    }
    int next = p[cur].top();
    p[cur].pop();
    cur = next;
  }
}
