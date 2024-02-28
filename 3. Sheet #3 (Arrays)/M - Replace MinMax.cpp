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
    int mi = arr[0], ma = arr[0], miIndex = 0, maIndex = 0;
    for (int k = 0; k < size; k++)
    {
        if (arr[k] < mi)
        {
            mi = arr[k];
            miIndex = k;
        }
        if (arr[k] > ma)
        {
            ma = arr[k];
            maIndex = k;
        }
    }

    arr[miIndex] = ma;
    arr[maIndex] = mi;
    for (int z = 0; z < size; z++)
    {
        cout << arr[z] << " ";
    }
}