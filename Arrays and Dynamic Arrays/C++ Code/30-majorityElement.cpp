#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& arr) {
  int n = arr.size();

  int count = 0;
  int candidate = -1;
  for (int i = 0; i < n; ++i) {
    if (count == 0) {
      candidate = arr[i];
      count++;
    } else if (arr[i] != candidate) {
      count--;
    } else {
      count++;
    }
  }
  return candidate;
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

  // Let's take up election analogy.
  // The distinct elements in the array represent candidates.
  // And the array has votes given by people to the specific candidates.
  // We have to iterate and cancel out any opposing vote. ( Eg. if nums[i] votes
  // to candidate '1', and nums[i+1] votes to candidate '2').

  int ans = majorityElement(v);
  cout << ans << endl;
  return 0;
}