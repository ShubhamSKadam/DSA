#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int> &v, int start, int end)
{

  for (int i = start, j = end; i < j; i++, j--)
  {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
  }
}
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

  int k;
  cin >> k;

  rotateArray(v, 0, n - 1);
  rotateArray(v, 0, k - 1);
  rotateArray(v, k, n - 1);

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}
