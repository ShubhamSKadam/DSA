#include <cmath>
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;

  int num = n;

  for (int i = 2; i * i <= num; i++) {
    while (n % i == 0) {
      cout << i << endl;
      n = n / i;
    }
  }

  if (n != 1) cout << n << endl;
}