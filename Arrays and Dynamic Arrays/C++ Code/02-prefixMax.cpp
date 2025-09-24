#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < n; ++i)
	{
		arr[i] = max(arr[i], arr[i - 1]);
	}

	int q;
	cin >> q;

	while (q--)
	{
		int idx;
		cin >> idx;
		cout << arr[idx] << endl;
	}

	delete[] arr;
}