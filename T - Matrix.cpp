
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size][size];
    int start = 0, end = size - 1, sumMain = 0, sumSec = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j == start)
            {
                sumMain += arr[i][j];
            }
            if (j == end)
            {
                sumSec += arr[i][j];
            }
        }
        start++;
        end--;
    }

    cout << abs(sumMain - sumSec) << endl;
}