#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
using namespace std;
int maxGapBucketization(vector<int>& arr) {
  int n = arr.size();

  // find min and max of the array
  int maxValue = arr[0];
  int minValue = arr[0];

  for (int i = 1; i < n; ++i) {
    maxValue = max(maxValue, arr[i]);
    minValue = min(minValue, arr[i]);
  }

  if (maxValue - minValue == 0) return 0;
  cout << maxValue << " " << minValue << endl;
  // Calculate the GAP
  int gap = -1;
  if ((maxValue - minValue) % (n - 1) == 0)
    gap = (maxValue - minValue) / (n - 1);
  else
    gap = ((maxValue - minValue) / (n - 1)) + 1;

  cout << " gap value " << gap << endl;

  vector<int> minBucket(n, INT_MAX);
  vector<int> maxBucket(n, INT_MIN);

  for (int i = 0; i < n; ++i) {
    int bkt_num = (arr[i] - minValue) / gap;

    minBucket[bkt_num] = min(minBucket[bkt_num], arr[i]);
    maxBucket[bkt_num] = max(maxBucket[bkt_num], arr[i]);
  }

  int result = 0;
  int prevMax = maxBucket[0];
  for (int i = 1; i < n; i++) {
    if (minBucket[i] == INT_MAX && maxBucket[i] == INT_MIN) continue;

    result = max(result, minBucket[i] - prevMax);
    prevMax = maxBucket[i];
  }

  cout << " Min Bucket" << endl;
  for (int i = 0; i < n; ++i) {
    cout << minBucket[i] << " ";
  }
  cout << endl;

  cout << "Max Bucket" << endl;
  for (int i = 0; i < n; ++i) {
    cout << maxBucket[i] << " ";
  }
  cout << endl;

  return result;
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

  int ans = maxGapBucketization(v);
  cout << "result : " << ans << endl;
}