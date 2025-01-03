#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int m;
    cin >> m;

    vector<int> v(n + 1, 0);
    vector<int> prefixSum(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        // constructing your prefix aray
        prefixSum[i] = prefixSum[i - 1] + v[i];
    }

    int happiness = 0;
    while (m--)
    {

        int l, r;
        cin >> l >> r;

        int subArraySum = prefixSum[r] - prefixSum[l - 1];
        if (subArraySum > 0)
        {
            happiness += subArraySum;
        }
    }

    cout << happiness << endl;
}
