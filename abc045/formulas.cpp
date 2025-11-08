#include <iostream>
#include <vector>

using namespace std;


int main() {
  string s;
  cin >> s;

  if (s.size() == 1) {
    cout << s;
    return 0;
  }
  
  vector<vector<int>> combinations;

  for (int i = 0; i < s.size(); i++) {
    vector<int> comb;
    for (int j = i; j < s.size(); j++) {
      comb.push_back(j);
      combinations.push_back(comb);
    }
  }

  for (auto comb : combinations) {
    for (int x : comb) {
      cout << x << " ";
    }
    cout << endl;
  }
}
