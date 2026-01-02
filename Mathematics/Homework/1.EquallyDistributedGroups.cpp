#include <iostream>
#include <map>
using namespace std;
int checkGCD(int a, int b) {

  int minm = min(a, b);
  int maxm = max(a, b);

  if (minm == 0) {
    return maxm;
  }

  while (maxm % minm != 0) {
    int temp = maxm;
    maxm = minm;
    minm = temp % minm;
  }

  return minm;
}
int main() {

  int t;
  cin >> t;

  while (t--) {

    int n;
    cin >> n;

    map<int, int> freqMap;
    for (int i = 0; i < n; i++) {
      int val;
      cin >> val;
      freqMap[val]++;
    }

    int result = 0;
    for (const auto &entry : freqMap) {
      result = checkGCD(result, entry.second);
    }

    if (result >= 2) {
      cout << "true" << endl;
    } else {
      cout << "false" << endl;
    }
  }
}
