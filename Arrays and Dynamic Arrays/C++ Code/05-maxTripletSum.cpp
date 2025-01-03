#include <iostream>
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

	vector<int> prefixMax(n);
	prefixMax[0] = v[0];
	for (int i = 1; i < n; ++i)
	{
		prefixMax[i] = max(prefixMax[i - 1], v[i]);
	}

	vector<int> sufixMax(n);
	sufixMax[n - 1] = v[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		sufixMax[i] = max(sufixMax[i + 1], v[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << sufixMax[i] << " ";
	}
	cout << endl;
}