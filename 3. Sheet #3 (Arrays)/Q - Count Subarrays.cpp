#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int result = size, x = 0, z = 0;
        while (true)
        {
            if (z == size - 1)
            {
                break;
            }
            if (arr[x] > arr[x + 1])
            {
                z++;
                x = z;
                continue;
            }
            result++;
            x++;
            if (x == size - 1)
            {
                z++;
                x = z;
            }
        }
        cout << result << endl;
    }
}