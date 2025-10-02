#include <iostream>
#include <vector>
using namespace std;

void arrayNesting(vector<int>& arr) {
  int n = arr.size();
  int maxLength = 0;

  for (int i = 0; i < n; ++i) {
    // check visited
    if (arr[i] != -1) {
      int start = arr[i];
      int length = 0;

      while (arr[start] != arr[i] && arr[start] != -1) {
        length++;
        int curr = start;
        start = arr[start];
        arr[curr] = -1;
      }
      length++;
      arr[start] = -1;
      maxLength = max(length, maxLength);
    }
  }
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

  arrayNesting(v);
}