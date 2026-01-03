#include <cmath>
#include <iostream>
using namespace std;
int findDivisors(int x) {

  int divCount = 0;
  int count = 0;
  for (int i = 1; i <= sqrt(x); i++) {
    if (i * i == x) {
      count += x / i;
      divCount += 1;
      break;
    }

    if (x % i == 0) {
      count += i;
      count += x / i;
      divCount += 2;
    }
  }

  if (divCount == 4) {
    return count;
  }

  return 0;
}
int main() {

  int n;
  cin >> n;

  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int maxCount = 0;
  for (int i = 0; i < n; i++) {
    int result = findDivisors(arr[i]);
    maxCount += result;
  }

  cout << maxCount << endl;
}
