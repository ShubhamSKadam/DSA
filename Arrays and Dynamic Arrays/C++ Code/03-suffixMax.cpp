#include<iostream>
using namespace std;
int main () {

	int n;
	cin >> n;

	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = n - 2; i >= 0; i--) {
		arr[i] = max(arr[i + 1], arr[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	// int q;
	// cin >> q;

	// while (q--) {
	// 	int idx;
	// 	cin >> idx;
	// 	cout << arr[idx] << endl;
	// }

	delete [] arr;
}