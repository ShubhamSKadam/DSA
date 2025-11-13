#include <iostream>
#include <vector>
using namespace std;

// Euclid's Division Lemma
int GCD(int a, int b) {
  while (a % b != 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }

  return b;
}
int main() {
  int n;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  int gcd = GCD(v[0], v[1]);
  for (int i = 2; i < v.size(); i++) {
    gcd = GCD(gcd, v[i]);
  }

  cout << gcd << endl;

  // Goal : Find any subsequence of the array that has GCD of 1.
}