#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, count;
    cin >> size >> count;
    long long arr1[size];
    long long arr2[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
        if (i == 0)
        {
            arr2[i] = arr1[i];
        }
        else
        {
            arr2[i] = arr1[i] + arr2[i - 1];
        }
    }
    while (count--)
    {
        long long pos1, pos2, sum = 0;
        cin >> pos1 >> pos2;
        pos1--;
        pos2--;

        sum = arr2[pos2] - arr2[pos1] + arr1[pos1];

        cout << sum << endl;
    }
}