#include <iostream>
#include <vector>
using namespace std;
void moveZeroes(vector<int>& arr) {
  int n = arr.size();

  if (n == 1) {
    return;
  }
  int i = 0, j = i + 1;

  while (j < n) {
    if (arr[i] == 0) {
      if (arr[j] != 0) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j++;
      } else {
        j++;
      }
    } else {
      i = j;
      j++;
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

  moveZeroes(v);
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << endl;
}