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

	int ans = INT_MIN;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) {
			for (int k = j + 1; k < n; ++k) {
				ans = max(ans, p * v[i] + q * v[j] + r * v[k]);
			}
		}
	}

	cout << ans << endl;
	return 0;
}