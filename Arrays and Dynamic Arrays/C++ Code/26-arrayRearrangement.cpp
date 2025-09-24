#include <iostream>
#include <vector>
using namespace std;
void revange(vector<int>& v) {
  for (int i = 0; i < v.size(); i++) {
    if (v[i] >= 0) {
      int index = v[i];
      int value = i;

      while (index != i) {
        int temp = v[index];
        v[index] = -(value + 1);
        value = index;
        index = temp;
      }
      v[index] = -1 * (value + 1);
    }
  }

  // compute values back to original
  for (int i = 0; i < v.size(); ++i) {
    v[i] = -1 * v[i] - 1;
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

  revange(v);

  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << " ";
  }
  cout << endl;
}