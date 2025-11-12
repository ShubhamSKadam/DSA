#include <iostream>
#include <vector>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;

  int maxm = max(a, b);
  int minm = min(a, b);

  while (maxm % minm != 0) {
    int temp = maxm;
    maxm = minm;
    minm = temp % minm;
  }

  cout << minm << endl;
  return 0;
}