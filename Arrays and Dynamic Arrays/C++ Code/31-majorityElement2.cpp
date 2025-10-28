#include <iostream>
#include <vector>
using namespace std;
vector<int> majorityElement(vector<int>& arr, int n) {
  int candidateOne = 0, countOne = 0;
  int candidateTwo = 0, countTwo = 0;

  // First pass
  for (int i = 0; i < n; ++i) {
    if (arr[i] == candidateOne)
      countOne++;
    else if (arr[i] == candidateTwo)
      countTwo++;
    else if (countOne == 0) {
      candidateOne = arr[i];
      countOne++;
    } else if (countTwo == 0) {
      candidateTwo = arr[i];
      countTwo++;
    } else {
      countOne--;
      countTwo--;
    }
  }

  // Second pass to verify the actual winner
  countOne = 0, countTwo = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == candidateOne)
      countOne++;
    else if (arr[i] == candidateTwo)
      countTwo++;
  }

  vector<int> result;
  if (countOne > n / 3) {
    result.push_back(candidateOne);
  }

  if (countTwo > n / 3) {
    result.push_back(candidateTwo);
  }

  return result;
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

    vector<int> ans = majorityElement(v, n);
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
}