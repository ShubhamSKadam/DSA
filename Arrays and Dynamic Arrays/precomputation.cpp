#include<iostream>
using namespace std;
int main () {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	// sum in each block
	for (int i = 1; i < n; ++i)
	{
		arr[i] = arr[i - 1] + arr[i];
	}

	int q;
	cin >> q;

	while (q--) {

		int l, r;
		cin >> l >> r;

		cout << "Sum from " << l << " to " << r << " is " << arr
		     [r] - arr[l - 1] << endl;
	}

	delete [] arr;
}