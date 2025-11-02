#include <iostream>
using namespace std;

int main() {
  int j = 3;
  int acc = 1;
  int k = 1;

  for (int i = 0; i <= 6; i++) {
    acc += j * (i+j);
    cout << acc << endl;;
  }

  return 0;
}
