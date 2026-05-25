#include <cmath>
#include <iostream>
using namespace std;
int main() {

  int n;
  cin >> n;

  int count = 0;

  if (n == 1) {
    cout << "Not Prime" << endl;
    return 0;
  }

  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      count++;
  }

  if (count > 0) {
    cout << "Not Prime" << endl;
  } else {
    cout << "Prime" << endl;
  }
  return 0;
}
