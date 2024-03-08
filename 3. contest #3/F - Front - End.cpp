#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, flag = 0;
    cin >> size;
    int arr[size];
    int reversed[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size / 2; i++)
    {

        cout << arr[i] << " " << arr[size - i - 1] << " ";
    }

    if (size % 2 != 0)
    {
        cout << arr[size / 2];
    }
