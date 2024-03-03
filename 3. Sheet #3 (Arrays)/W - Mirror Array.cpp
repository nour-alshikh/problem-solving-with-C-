#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, size;
    cin >> rows >> size;

    while (rows--)
    {
        int arr[size];
        for (int z = 0; z < size; z++)
        {
            cin >> arr[z];
        }
        for (int z = size - 1; z >= 0; z--)
        {
            cout << arr[z] << " ";
        }

        cout << endl;
    }
}