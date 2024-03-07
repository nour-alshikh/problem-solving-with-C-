#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int search)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == search)
        {
            return mid;
        }
        else if (arr[mid] < search)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size, searchNum;
    cin >> size >> searchNum;
    int arr[size];
    for (int z = 0; z < size; z++)
    {
        cin >> arr[z];
    }
    sort(arr, arr + size);
    while (searchNum--)
    {
        int search;
        cin >> search;
        int result = binarySearch(arr, 0, size - 1, search);
        if (result == -1)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }
}