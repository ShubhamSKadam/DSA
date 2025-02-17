#include <iostream>
using namespace std;
void prefixSumRow(vector<vector<int>> &arr, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            arr[i][j] = arr[i][j - 1] + arr[i][j];
        }
    }
}
void prefixSumColumn(vector<vector<int>> &arr, int n, int m)
{
    for (int j = 0; j < m; j++)
    {
        for (int i = 1; i < n; i++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j];
        }
    }
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

    prefixSumRow(arr, n, m);
    prefixSumColumn(arr, n, m);

    int queries;
    cin >> queries;

    while (queries--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long sum = arr[x2][y2];

        if (x1 > 0)
        {
            sum -= arr[x1 - 1][y2];
        }

        if (y1 > 0)
        {
            sum -= arr[x2][y1 - 1];
        }

        if (x1 > 0 && y1 > 0)
        {
            sum += arr[x1 - 1][y1 - 1];
        }
        cout << sum << endl;
    }
}