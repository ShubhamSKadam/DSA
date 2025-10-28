#include <iostream>
#include <utility>  // For std::swap
#include <vector>

using namespace std;

int firstMissingPositive(vector<int>& nums) {
  int n = nums.size();

  for (int i = 0; i < n; ++i) {
    while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
      swap(nums[i], nums[nums[i] - 1]);
    }
  }

  for (int i = 0; i < n; ++i) {
    if (nums[i] != i + 1) {
      return i + 1;
    }
  }

  return n + 1;
}

// Your main function is correct, no changes needed here.
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
    cout << firstMissingPositive(v) << endl;
  }
  return 0;
}