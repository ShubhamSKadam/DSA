#include <algorithm>
#include <iostream>
using namespace std;
void merge(int *arr, int start, int mid, int end) {
  int i=start,j=mid+1,k=0, temp[100;
}
void mergeSort(int *arr, int start, int end) {

  if (start >= end) {
    return;
  }

  int mid = (start + end) / 2;
  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);
  merge(arr, start, mid, end);
}
int main() {

  int n;
  cin >> n;

  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  mergeSort(arr, 0, n - 1);
}
