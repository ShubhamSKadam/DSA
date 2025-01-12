#include <iostream>
using namespace std;
int getSum(int i, int j, int i1, int j1, vector<vector<int> > &v)
{
    int sum = 0;
    for (int k = i; k <= i1; k++)
    {
        for (int l = j; l <= j1; l++)
        {
            sum += v[k][l];
        }
    }
    cout << "Sum for " << i << " iteration" << "is" << sum << endl;
    return sum;
}
int main()
{

    int n, m;
    cin >> n >> m;

    // * 2D vector declaration
    // vector<vector<int>> v;

    // * Initialization using the length
    vector<vector<int> > v(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int i1 = i; i1 < n; i1++)
            {
                for (int j1 = j; j1 < n; j1++)
                {
                    ans += getSum(i, j, i1, j1, v);
                }
            }
        }
    }

    cout << ans << endl;
};