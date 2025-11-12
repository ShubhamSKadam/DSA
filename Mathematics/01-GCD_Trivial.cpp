#include <iostream>
#include <vector>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;

  int gcd = 0;

  for (int i = 1; i <= min(a, b); i++) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }

  cout << "GCD : " << gcd << endl;
  return 0;
}