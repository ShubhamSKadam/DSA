#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}

	int p, q, r;
	cin >> p >> q >> r;

	vector<int> prefixMax(n);
	prefixMax[0] = v[0] * p;
	for (int i = 1; i < n; ++i)
	{
		prefixMax[i] = max(prefixMax[i - 1], v[i] * p);
	}

	vector<int> suffixMax(n);
	suffixMax[n - 1] = v[n - 1] * r;
	for (int i = n - 2; i >= 0; i--) {
		suffixMax[i] = max(suffixMax[i + 1], v[i] * r);
	}

	int ans = INT_MIN;
	for (int i = 1; i <= n - 2; ++i)
	{
		int x = prefixMax[i - 1] + v[i] * q + suffixMax[i + 1];
		ans = max(x, ans);
	}

	cout << ans << endl;
}