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

    for (int i = 0; i < size - 1; i++)
    {
        int val = arr[i];
        int index, flag = 0;
        for (int x = i + 1; x < size; x++)
        {
            if (arr[x] < val)
            {
                index = x;
                val = arr[x];
                flag = 1;
            }
        }
        if (flag)
        {

            int temp = arr[i];
            arr[i] = val;
            arr[index] = temp;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}