#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, min, counter;
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    counter = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == min)
        {
            counter++;
        }
        if (arr[j] < min)
        {
            min = arr[j];
            counter = 1;
        }
    }

    if (counter % 2 == 0)
    {
        cout << "Unlucky";
    }
    else
    {
        cout << "Lucky";
    }
}