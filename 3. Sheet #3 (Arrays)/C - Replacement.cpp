#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;

    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        if (num < 0)
        {
            arr[i] = 2;
        }
        else if (num > 0)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 0;
        }
    }

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
}