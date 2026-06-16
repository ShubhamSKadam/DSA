#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;

  if (n == 1) {
    cout << "No Primes found" << endl;
    return 0;
  }

  int* primes = new int[n + 1];

  // Preprocess the array
  // Assume all numbers in primes array are prime, 1 -> prime, 0 -> not prime
  for (int i = 1; i <= n; i++) {
    primes[i] = 1;
  }

  primes[1] = 0;

  for (int i = 2; i * i <= n; i++) {
    if (primes[i] == 1) {
      for (int j = i; i * j <= n; j++) {
        primes[i * j] = 0;
      }
    }
  }
  delete[] primes;
}