#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, result;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int k = 0; k < size; k++)
    {
        int counter = 0;
        if (arr[k] % 2 != 0)
        {
            cout << 0;
            return 0;
        }

        while (arr[k] % 2 == 0)
        {
            arr[k] /= 2;
            counter++;
        }

        if (k == 0 || counter < result)
        {
            result = counter;
        }
    }

    cout << result;
}