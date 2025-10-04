#include <iostream>
#include <vector>
using namespace std;
int firstMissingPositive(vector<int>& arr) {
  int n = arr.size();

  // Rearrange the array
  for (int i = 0; i < n; ++i) {
    if (arr[i] % 1000 != 0) {
      int next = arr[i] - 1;
      int curr = arr[i];
      if (next != i && next < n) {
        while (curr > 0 && next >= 0 && next < n) {
          int temp = arr[next];
          arr[next] = curr + n;
          curr = temp;
          next = curr - 1;
        }
      }
    }
  }

  // decrypt the array
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i] % n;
  }

  cout << "Decrypted array" << endl;
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // find missing
  for (int i = 0; i < n; ++i) {
    if (arr[i] != i + 1) {
      return i + 1;
    }
  }

  return n + 1;
}
int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      v.push_back(x);
    }

    int result = firstMissingPositive(v);
    cout << result << endl;
    cout << "------------------------" << endl;
  }
}