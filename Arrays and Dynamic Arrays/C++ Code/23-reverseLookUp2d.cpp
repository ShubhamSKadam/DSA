#include <iostream>
#include <vector>
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
    cout << "Sum for submatrix (" << i << ", " << j << ") to (" << i1 << ", " << j1 << ") is " << sum << endl;
    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;

    // Initialize 2D vector
    vector<vector<int> > v(n, vector<int>(m));

    // Input matrix values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        { // Fix: Iterate up to m, not n
            cin >> v[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        { // Fix: Iterate up to m, not n
            for (int i1 = i; i1 < n; i1++)
            { // Fix: Use i1 < n
                for (int j1 = j; j1 < m; j1++)
                { // Fix: Use j1 < m
                    ans += getSum(i, j, i1, j1, v);
                }
            }
        }
    }

    cout << "Total sum of all submatrices: " << ans << endl;
    return 0;
}
