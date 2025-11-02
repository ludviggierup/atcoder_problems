#include <iostream>
#include <queue>

using namespace std;

int main() {
  int n, l;
  cin >> n;
  cin >> l;

  std::priority_queue<string, vector<string>, greater<string>> q;
  string line;
  for (int i = 0; i < n+1; i++) {
    getline(cin, line);
    q.push(line);
  }

  string res;
  while (!q.empty()) {
    res.append(q.top());
    q.pop();
  }

  cout << res;
}
