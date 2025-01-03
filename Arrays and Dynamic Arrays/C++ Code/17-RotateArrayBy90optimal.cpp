#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateEachRow(vector<int> &v)
{
	int n = v.size();
	for (int i = 0, j = n - 1; i < j; i++, j--)
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

	vector<vector<int>> arr(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	// transpose the matrix
	int row = n;
	for (int i = 0; i <= n - 2; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			cout << "i :" << i << " " << "j :" << j << endl;
			swap(arr[i][j], arr[j][i]);
		}
	}

	// Rotating each row
	for (int i = 0; i < n; i++)
	{
		rotateEachRow(arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
