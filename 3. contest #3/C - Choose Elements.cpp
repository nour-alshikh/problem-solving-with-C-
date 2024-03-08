#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, count, sum = 0;
    cin >> size >> count;
    long long arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + size);
    reverse(arr, arr + size);

    for (int x = 0; x < count; x++)
    {
        if (arr[x] < 0)
        {
            break;
        }
        sum += arr[x];
    }

    cout << sum;
}