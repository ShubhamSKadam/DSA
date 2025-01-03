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

	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = i; j < n; j++)
		{
			sum += v[j];
			ans += sum;
		}
	}
	cout << ans << endl;
}
