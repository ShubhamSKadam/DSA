#include <algorithm> // for std::max and std::min
#include <iostream>
using namespace std;

// Optimized GCD
long long getGCD(long long a, long long b) {
  while (b != 0) {
    a %= b;
    swap(a, b);
  }
  return a;
}

int main() {
  int t;
  if (!(cin >> t))
    return 0;

  while (t--) {
    long long n, a, b, k;
    cin >> n >> a >> b >> k;

    long long gcd = getGCD(a, b);

    // Calculate LCM safely: (a*b)/gcd can overflow if not careful
    // Divide before multiplying to keep numbers smaller
    long long lcm = (a / gcd) * b;

    // Problems divisible by A
    long long countA = n / a;
    // Problems divisible by B
    long long countB = n / b;
    // Problems divisible by both (the intersection)
    long long countBoth = n / lcm;

    // Correct logic: (A only) + (B only)
    // Which simplifies to: countA + countB - 2 * countBoth
    long long result = countA + countB - (2 * countBoth);

    if (result >= k) {
      cout << "Win" << endl;
    } else {
      cout << "Lose" << endl;
    }
  }
  return 0;
}
