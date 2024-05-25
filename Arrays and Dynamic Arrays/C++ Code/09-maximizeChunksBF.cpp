#include<iostream>
#include<vector>
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

	int max_so_far = -1;
	int chunks = 0;

	for (int i = 0; i < n; ++i)
	{
		if (v[i] > max_so_far)
			max_so_far = v[i];

		if (max_so_far == i)
			chunks++;
	}

	cout << chunks << endl;
}