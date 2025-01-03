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

	int p, q, r;
	cin >> p >> q >> r;

	// calculate the prefix max
	vector<int> prefixMax(n);
	prefixMax[0] = v[0] * p;
	for (int i = 1; i < n; ++i)
	{
		prefixMax[i] = max(prefixMax[i - 1], v[i] * p);
	}

	// calculate the suffix max
	vector<int> suffixMax(n);
	suffixMax[n - 1] = v[n - 1] * r;
	for (int i = n - 2; i >= 0; i--)
	{
		suffixMax[i] = max(suffixMax[i + 1], v[i] * r);
	}

	// find the max triplet sum;
	int maxTripletSum = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		maxTripletSum = max(maxTripletSum, prefixMax[i] + v[i] * q + suffixMax[i]);
	}

	cout << maxTripletSum << endl;
}