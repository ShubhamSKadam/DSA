#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  int currDiv = 2;
  int currFactor = -1;

  for (int i = currDiv; i <= sqrt(n); i++) {
    if (n % i == 0) {
      currFactor = i;
      break;
    }
  }

  while (n != 1) {
    if (n % currFactor == 0) {
      n = n / currFactor;
      cout << currFactor << " ";
    } else {
      currFactor++;
    }
  }

  cout << endl;
}