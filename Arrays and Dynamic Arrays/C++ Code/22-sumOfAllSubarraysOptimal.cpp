#include <iostream>
#include <vector>
using namespace std;
int main()
{

	int n;
	cin >> n;

	vector<long long> arr;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}

	long long ans = 0;
	long long m = 1000000007;
	for (int i = 0; i < n; ++i)
	{
		long long sum = (((((i + 1) % m) * ((n - i) % m)) % m) * (arr[i] % m)) % m;
		ans = ((ans % m + sum % m) % m);
	}

	cout << ans << endl;
}