#include <iostream>
#include <vector>
using namespace std;

// Using euclidean method
long long GCD(long long a, long long b) {
  long long maxm = max(a, b);
  long long minm = min(a, b);

  if (minm == 0) return maxm;

  while (maxm % minm != 0) {
    long long temp = maxm;
    maxm = minm;
    minm = temp % minm;
  }

  return minm;
}

long long LCM(long long a, long long b, long long gcd) {
  if (a == 0 || b == 0) return 0;
  long long prod = (a / gcd) * b;
  return prod;
}
int main() {
  long long a, b;

  cin >> a >> b;

  long long gcd = GCD(a, b);
  long long lcm = LCM(a, b, gcd);

  cout << gcd << " " << lcm << endl;
}