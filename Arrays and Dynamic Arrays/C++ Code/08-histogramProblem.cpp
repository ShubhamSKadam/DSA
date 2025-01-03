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
	for (int i = 1; i < n; i++)
	{
		prefixMax[i] = max(prefixMax[i - 1], v[i]);
	}

	vector<int> suffixMax(n);
	suffixMax[n - 1] = v[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		suffixMax[i] = max(suffixMax[i + 1], v[i]);
	}

	int waterTrapped = 0;
	for (int i = 1; i < n - 1; i++)
	{
		int h1 = prefixMax[i - 1];
		int h2 = suffixMax[i + 1];

		int decidingHeight = min(h1, h2);
		if (decidingHeight > v[i])
			waterTrapped += decidingHeight - v[i];
	}

	cout << waterTrapped << endl;
}