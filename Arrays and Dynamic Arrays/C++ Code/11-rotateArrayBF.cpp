#include <iostream>
#include <vector>
using namespace std;
void moveOneUnit(vector<int> &v, int n)
{

    int temp = v[n - 1];

    for (int i = n - 1; i >= 1; i--)
    {
        v[i] = v[i - 1];
    }
    v[0] = temp;
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

    for (int i = 0; i < k; i++)
    {
        moveOneUnit(v, n);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}