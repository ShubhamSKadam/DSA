#include <iostream>
#include <climits>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int k;
    cin >> k;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find the count of legal elements
    int legalElements = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
            legalElements++;
    }

    int maxGroupElement = 0;
    for (int i = 0; i < legalElements; i++)
    {
        if (arr[i] <= k)
        {
            maxGroupElement++;
        }
    }

    int tempMax = maxGroupElement;
    for (int j = legalElements; j < n; j++)
    {
        if (arr[j - legalElements] <= k)
            tempMax--;

        if (arr[j] <= k)
            tempMax++;

        maxGroupElement = max(maxGroupElement, tempMax);
    }
    cout << legalElements - maxGroupElement << endl;

    delete[] arr;
}