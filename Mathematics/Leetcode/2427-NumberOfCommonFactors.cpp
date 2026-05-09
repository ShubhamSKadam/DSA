// maxm = 12
// a = 1
// b = ?
// n = 12
// a * b = maxm
// 1 * b = maxm
// b = maxm/1;

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
int main() {

  int a, b;
  cin >> a >> b;

  int count = 0;

  // Find all the factors of the max between a and b
  int maxm = max(a, b);
  int minm = min(a, b);

  if (maxm == 1 && minm == 1) {
    cout << 1 << endl;
    return 1;
  }

  for (int i = 1; i <= sqrt(maxm); i++) {
    if (maxm % i == 0) {
      int factor = maxm / i;

      if (minm % i == 0) {
        count++;
      }
      if (minm % factor == 0) {
        count++;
      }
    }
  }

  cout << count << endl;
}
