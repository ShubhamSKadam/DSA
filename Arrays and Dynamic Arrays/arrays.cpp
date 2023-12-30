#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;

	int arr[100]; // static array
	vector<int> arrDynamic; // dynamic array

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		arrDynamic.push_back(x);
	}
}