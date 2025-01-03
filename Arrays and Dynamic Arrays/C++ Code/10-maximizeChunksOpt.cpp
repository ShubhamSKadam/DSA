#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;

  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    v.push_back(x);
  }

  int chunks = 0;

  int maxValue = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    maxValue = max(maxValue, v[i]);

    if (maxValue == i)
    {
      chunks++;
    }
  }

  cout << chunks << endl;
}