#include <iostream>
using namespace std;
int getSum(vector<vector<int>> arr, int n, int m)
{
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int TopLeft = (i + 1) * (j + 1);
            int BottomLeft = (n - i) * (m - j);
            sum += TopLeft * BottomLeft * arr[i][j];
        }
    }
    return sum;
}
int main()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    long long ans = getSum(arr, n, m);
    cout << ans << endl;
    return 0;
}
