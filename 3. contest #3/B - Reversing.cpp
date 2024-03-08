#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int k = 0; k < size; k++)
    {
        if (arr[k] == 0)
        {
            reverse(arr, arr + k);
        }
    }

    for (int x = 0; x < size; x++)
    {
        cout << arr[x] << " ";
    }
}