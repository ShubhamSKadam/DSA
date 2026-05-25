#include <algorithm>
#include <iostream>
using namespace std;
int findGCD(int a, int b) {

  int maxm = max(a, b);
  int minm = min(a, b);

  while (minm > 0) {
    int temp = minm;
    minm = maxm % minm;
    maxm = temp;
  }

  return maxm;
}
int smallestEvenMultiple(int n) {
  // GCD(2,n) * LCM(2,n) = 2 * n;
  // Therefor, LCM(2,n) = 2 * n / GCD(2,n)

  int result = findGCD(2, n);
  cout << "GCD: " << " " << result << endl;

  int ans = (2 * n) / result;

  return ans;
}
int main() {

  int n;
  cin >> n;

  cout << smallestEvenMultiple(n) << endl;
}
