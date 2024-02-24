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

    for (int k = size - 1; k >= 0; k--)
    {

        cout << arr[k] << " ";
    }
}