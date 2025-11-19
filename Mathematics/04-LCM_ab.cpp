#include <climits>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;

  for (int i = max(a, b); i <= a * b; i++) {
    if (i % a == 0 && i % b == 0) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}